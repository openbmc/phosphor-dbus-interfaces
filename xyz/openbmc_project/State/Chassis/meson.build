sources_xyz_openbmc_project += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Chassis.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.State.Chassis'])

sources_xyz_openbmc_project += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Chassis.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.State.Chassis'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/Chassis')

install_data(
  '../Chassis.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/State')

_sdbusplus_xyz_openbmc_project_State_Chassis_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../Chassis.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'markdown', 'xyz.openbmc_project.State.Chassis'])
sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Chassis.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.State.Chassis'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Chassis.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.State.Chassis'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/Chassis')

install_data(
  '../Chassis.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/State')

_sdbusplus_xyz_openbmc_project_State_Chassis_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Chassis.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.State.Chassis'])

