sources_org_open_power += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../SecurityKeys.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'org.open_power.Control.TPM.SecurityKeys'])

sources_org_open_power += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../SecurityKeys.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'org.open_power.Control.TPM.SecurityKeys'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/Control/TPM/SecurityKeys')

install_data(
  '../SecurityKeys.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/org/open_power/Control/TPM')

_sdbusplus_org_open_power_Control_TPM_SecurityKeys_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../SecurityKeys.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'org.open_power.Control.TPM.SecurityKeys'])

