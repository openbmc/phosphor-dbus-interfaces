sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../ObjectMapper.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.ObjectMapper'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../ObjectMapper.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.ObjectMapper'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/ObjectMapper')

install_data(
  '../ObjectMapper.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project')

_sdbusplus_xyz_openbmc_project_ObjectMapper_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../ObjectMapper.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.ObjectMapper'])

