#!/usr/bin/env bash
declare -A visited
append_clean() {
  local file="$1"

  if [ -z "${visited["$file"]-}" ]; then
    rm -rf "$file"
    visited["$file"]=1
  fi

  mkdir -p "$(dirname "$file")"
  cat >>"$file"
}

for file in $(find com xyz org -name '*.yaml'); do
  file="${file#./}"
  path="${file%.*.yaml}"
  domain="${path//\//.}"
  meson="$path/meson.build"

  if [[ "$file" == *.interface.yaml ]]; then
    append_clean "$meson" <<EOF
generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../$(basename "$file")',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', '$domain'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../$(basename "$file")',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', '$domain'],
  install: true,
  install_dir: get_option('includedir') / '$path')

install_data(
  '../$(basename "$file")',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/$(dirname "$file")')

EOF
  fi

  if [[ "$file" == *.errors.yaml ]]; then
    append_clean "$meson" <<EOF
generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../$(basename "$file")',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', '$domain'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../$(basename "$file")',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', '$domain'],
  install: true,
  install_dir: get_option('includedir') / '$path')

install_data(
  '../$(basename "$file")',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/$(dirname "$file")')

EOF
  fi
done

meson_dirs=()
for file in "${!visited[@]}"; do
  meson_dirs+=("$(dirname "$file")")
done
declare -A written=()
while [ "${#meson_dirs[@]}" -gt 0 ]; do
  declare -A new_dirs=()
  for dir in "${meson_dirs[@]}"; do
    parent="$(dirname "$dir")"
    if [ -n "${written["$dir"]-}" ]; then
      continue
    fi
    if [ "$(dirname "$parent")" = '.' ]; then
      continue
    fi
    append_clean "$parent/meson.build" <<EOF
subdir('$(basename "$dir")')
EOF
    written["$dir"]=1
    new_dirs["$parent"]=1
  done
  meson_dirs=("${!new_dirs[@]}")
done
