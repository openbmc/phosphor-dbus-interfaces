sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../PowerOnHours.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.State.PowerOnHours'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../PowerOnHours.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.State.PowerOnHours'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/PowerOnHours')

install_data(
  '../PowerOnHours.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/State')

_sdbusplus_xyz_openbmc_project_State_PowerOnHours_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../PowerOnHours.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.State.PowerOnHours'])

