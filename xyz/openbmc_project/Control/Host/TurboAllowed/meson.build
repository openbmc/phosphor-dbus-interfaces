sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../TurboAllowed.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.Host.TurboAllowed'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../TurboAllowed.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.Host.TurboAllowed'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/Host/TurboAllowed')

install_data(
  '../TurboAllowed.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control/Host')

_sdbusplus_xyz_openbmc_project_Control_Host_TurboAllowed_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../TurboAllowed.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Control.Host.TurboAllowed'])

