sources_org_open_power += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../PEL.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'org.open_power.Logging.PEL'])

sources_org_open_power += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../PEL.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'org.open_power.Logging.PEL'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/Logging/PEL')

install_data(
  '../PEL.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/org/open_power/Logging')

_sdbusplus_org_open_power_Logging_PEL_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../PEL.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'org.open_power.Logging.PEL'])

