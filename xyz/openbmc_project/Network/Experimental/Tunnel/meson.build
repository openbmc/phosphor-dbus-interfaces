sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Tunnel.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Network.Experimental.Tunnel'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Tunnel.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Network.Experimental.Tunnel'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Network/Experimental/Tunnel')

install_data(
  '../Tunnel.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Network/Experimental')

_sdbusplus_xyz_openbmc_project_Network_Experimental_Tunnel_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Tunnel.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Network.Experimental.Tunnel'])

