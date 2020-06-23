sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VLAN.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Network.VLAN'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VLAN.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Network.VLAN'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Network/VLAN')

install_data(
  '../VLAN.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Network')

_sdbusplus_xyz_openbmc_project_Network_VLAN_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../VLAN.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Network.VLAN'])

