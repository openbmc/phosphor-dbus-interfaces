sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Status.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.State.OperatingSystem.Status'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Status.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.State.OperatingSystem.Status'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/OperatingSystem/Status')

install_data(
  '../Status.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/State/OperatingSystem')

_sdbusplus_xyz_openbmc_project_State_OperatingSystem_Status_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Status.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.State.OperatingSystem.Status'])

