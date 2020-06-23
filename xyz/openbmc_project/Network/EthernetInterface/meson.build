sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../EthernetInterface.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Network.EthernetInterface'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../EthernetInterface.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Network.EthernetInterface'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Network/EthernetInterface')

install_data(
  '../EthernetInterface.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Network')

_sdbusplus_xyz_openbmc_project_Network_EthernetInterface_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../EthernetInterface.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Network.EthernetInterface'])

