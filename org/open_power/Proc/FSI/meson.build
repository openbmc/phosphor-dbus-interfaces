sources_org_open_power += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../FSI.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'org.open_power.Proc.FSI'])

sources_org_open_power += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../FSI.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'org.open_power.Proc.FSI'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/Proc/FSI')

install_data(
  '../FSI.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/org/open_power/Proc')

_sdbusplus_org_open_power_Proc_FSI_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../FSI.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'markdown', 'org.open_power.Proc.FSI'])
