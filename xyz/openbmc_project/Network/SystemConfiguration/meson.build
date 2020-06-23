sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../SystemConfiguration.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Network.SystemConfiguration'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../SystemConfiguration.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Network.SystemConfiguration'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Network/SystemConfiguration')

install_data(
  '../SystemConfiguration.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Network')

_sdbusplus_xyz_openbmc_project_Network_SystemConfiguration_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../SystemConfiguration.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Network.SystemConfiguration'])

