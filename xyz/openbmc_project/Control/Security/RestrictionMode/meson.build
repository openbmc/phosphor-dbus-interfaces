sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../RestrictionMode.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.Security.RestrictionMode'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../RestrictionMode.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.Security.RestrictionMode'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/Security/RestrictionMode')

install_data(
  '../RestrictionMode.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control/Security')

_sdbusplus_xyz_openbmc_project_Control_Security_RestrictionMode_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../RestrictionMode.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Control.Security.RestrictionMode'])

