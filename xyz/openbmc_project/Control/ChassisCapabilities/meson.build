sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../ChassisCapabilities.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.ChassisCapabilities'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../ChassisCapabilities.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.ChassisCapabilities'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/ChassisCapabilities')

install_data(
  '../ChassisCapabilities.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control')

_sdbusplus_xyz_openbmc_project_Control_ChassisCapabilities_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../ChassisCapabilities.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Control.ChassisCapabilities'])

