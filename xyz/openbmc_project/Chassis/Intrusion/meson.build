sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Intrusion.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Chassis.Intrusion'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Intrusion.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Chassis.Intrusion'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Chassis/Intrusion')

install_data(
  '../Intrusion.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Chassis')

_sdbusplus_xyz_openbmc_project_Chassis_Intrusion_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Intrusion.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Chassis.Intrusion'])

