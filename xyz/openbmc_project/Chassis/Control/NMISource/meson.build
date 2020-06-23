sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../NMISource.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Chassis.Control.NMISource'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../NMISource.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Chassis.Control.NMISource'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Chassis/Control/NMISource')

install_data(
  '../NMISource.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Chassis/Control')

_sdbusplus_xyz_openbmc_project_Chassis_Control_NMISource_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../NMISource.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Chassis.Control.NMISource'])

