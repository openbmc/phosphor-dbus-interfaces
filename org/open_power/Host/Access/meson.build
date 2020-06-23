sources_org_open_power += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Access.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'exception-cpp', 'org.open_power.Host.Access'])

sources_org_open_power += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Access.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'exception-header', 'org.open_power.Host.Access'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/Host/Access')

install_data(
  '../Access.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/org/open_power/Host')

_sdbusplus_org_open_power_Host_Access_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../Access.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'markdown', 'org.open_power.Host.Access'])
