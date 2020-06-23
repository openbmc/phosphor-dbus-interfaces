sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../ErrorBlocksTransition.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Logging.ErrorBlocksTransition'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../ErrorBlocksTransition.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Logging.ErrorBlocksTransition'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Logging/ErrorBlocksTransition')

install_data(
  '../ErrorBlocksTransition.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Logging')

_sdbusplus_xyz_openbmc_project_Logging_ErrorBlocksTransition_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../ErrorBlocksTransition.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Logging.ErrorBlocksTransition'])

