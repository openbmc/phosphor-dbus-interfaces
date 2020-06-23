sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Availability.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.State.Decorator.Availability'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Availability.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.State.Decorator.Availability'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/Decorator/Availability')

install_data(
  '../Availability.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/State/Decorator')

_sdbusplus_xyz_openbmc_project_State_Decorator_Availability_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Availability.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.State.Decorator.Availability'])

