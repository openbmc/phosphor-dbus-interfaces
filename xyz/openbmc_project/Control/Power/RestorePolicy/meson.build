sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../RestorePolicy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.Power.RestorePolicy'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../RestorePolicy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.Power.RestorePolicy'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/Power/RestorePolicy')

install_data(
  '../RestorePolicy.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control/Power')

_sdbusplus_xyz_openbmc_project_Control_Power_RestorePolicy_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../RestorePolicy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Control.Power.RestorePolicy'])

