sources_org_open_power += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Host.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'org.open_power.Host'])

sources_org_open_power += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Host.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'org.open_power.Host'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/Host')

install_data(
  '../Host.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/org/open_power')

_sdbusplus_org_open_power_Host_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../Host.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'markdown', 'org.open_power.Host'])
_sdbusplus_org_open_power_Host_Access_md = []
subdir('Access')

custom_target(
  'Access.md',
  output: 'Access.md',
  input: _sdbusplus_org_open_power_Host_Access_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'org/open_power/Host/Access.md')
