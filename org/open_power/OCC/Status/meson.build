sources_org_open_power += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Status.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'org.open_power.OCC.Status'])

sources_org_open_power += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Status.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'org.open_power.OCC.Status'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/OCC/Status')

install_data(
  '../Status.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/org/open_power/OCC')

_sdbusplus_org_open_power_OCC_Status_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Status.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'org.open_power.OCC.Status'])

