sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../ID.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Chassis.Buttons.ID'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../ID.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Chassis.Buttons.ID'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Chassis/Buttons/ID')

install_data(
  '../ID.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Chassis/Buttons')

_sdbusplus_xyz_openbmc_project_Chassis_Buttons_ID_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../ID.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Chassis.Buttons.ID'])

