sources_org_open_power += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Callout.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'exception-cpp', 'org.open_power.Common.Callout'])

sources_org_open_power += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Callout.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'exception-header', 'org.open_power.Common.Callout'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/Common/Callout')

install_data(
  '../Callout.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/org/open_power/Common')

_sdbusplus_org_open_power_Common_Callout_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../Callout.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'markdown', 'org.open_power.Common.Callout'])
