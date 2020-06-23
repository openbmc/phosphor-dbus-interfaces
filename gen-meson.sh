#!/usr/bin/env bash
declare -A file_visited
append_clean() {
  local file="$1"

  if [ -z "${file_visited["$file"]-}" ]; then
    rm -rf "$file"
    file_visited["$file"]=1
  fi

  mkdir -p "$(dirname "$file")"
  cat >>"$file"
}

declare -A gen_md
for file in $(find com xyz org -name '*.yaml'); do
  file="${file#./}"
  path="${file%.*.yaml}"
  domain="${path//\//.}"
  mdname="${path//\//_}_md"
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

$mdname += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../$(basename "$file")',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', '$domain'])

EOF
    gen_md["$path"]=1
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

$mdname += custom_target(
  'error.md',
  output: 'error.md',
  input: '../$(basename "$file")',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'markdown', '$domain'])
EOF
    gen_md["$path"]=1
  fi
done

for md in "${!gen_md[@]}"; do
  append_clean "$(dirname "$md")/meson.build" <<EOF
${md//\//_}_md = []
EOF
done

meson_dirs=()
for file in "${!file_visited[@]}"; do
  if [[ "$file" == */meson.build ]]; then
    meson_dirs+=("$(dirname "$file")")
  fi
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

for md in "${!gen_md[@]}"; do
  append_clean "$(dirname "$md")/meson.build" <<EOF

custom_target(
  '$(basename "$md").md',
  output: '$(basename "$md").md',
  input: ${md//\//_}_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / '$md.md')
EOF
done

