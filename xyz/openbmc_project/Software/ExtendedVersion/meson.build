sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../ExtendedVersion.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Software.ExtendedVersion'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../ExtendedVersion.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Software.ExtendedVersion'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Software/ExtendedVersion')

install_data(
  '../ExtendedVersion.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Software')

_sdbusplus_xyz_openbmc_project_Software_ExtendedVersion_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../ExtendedVersion.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Software.ExtendedVersion'])

