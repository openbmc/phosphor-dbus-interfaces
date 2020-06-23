#!/usr/bin/env bash
set -ue

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

declare -A gen_domain
declare -A gen_md
for file in $(find "$@" -name '*.yaml'); do
  file="${file#./}"
  path="${file%.*.yaml}"
  fulldomain="${path//\//.}"
  var="${path//\//_}"
  subdomain="${fulldomain#*.*.}"
  mdvar="_sdbusplus_${var}_md"
  domain="${fulldomain:0:$((${#var}-${#subdomain}-1))}"
  domainvar="sources_${domain//./_}"
  meson="$path/meson.build"

  if [[ "$file" == *.interface.yaml ]]; then
    append_clean "$meson" <<EOF
$domainvar += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../$(basename "$file")',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', '$fulldomain'])

$domainvar += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../$(basename "$file")',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', '$fulldomain'],
  install: true,
  install_dir: get_option('includedir') / '$path')

install_data(
  '../$(basename "$file")',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/$(dirname "$file")')

$mdvar += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../$(basename "$file")',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', '$fulldomain'])

EOF
    gen_domain["$domain"]=1
    gen_md["$path"]=1
  fi

  if [[ "$file" == *.errors.yaml ]]; then
    append_clean "$meson" <<EOF
$domainvar += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../$(basename "$file")',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', '$fulldomain'])

$domainvar += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../$(basename "$file")',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', '$fulldomain'],
  install: true,
  install_dir: get_option('includedir') / '$path')

install_data(
  '../$(basename "$file")',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/$(dirname "$file")')

$mdvar += custom_target(
  'error.md',
  output: 'error.md',
  input: '../$(basename "$file")',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'markdown', '$fulldomain'])
EOF
    gen_domain["$domain"]=1
    gen_md["$path"]=1
  fi
done

for domain in "${!gen_domain[@]}"; do
  append_clean "${domain//./\/}/meson.build" <<EOF
sources_${domain//./_} = []
EOF
done

for md in "${!gen_md[@]}"; do
  append_clean "$(dirname "$md")/meson.build" <<EOF
_sdbusplus_${md//\//_}_md = []
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
  input: _sdbusplus_${md//\//_}_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / '$md.md')
EOF
done

