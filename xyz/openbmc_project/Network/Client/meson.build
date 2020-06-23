generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Client.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Network.Client'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Client.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Network.Client'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Network/Client')

install_data(
  '../Client.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Network')

xyz_openbmc_project_Network_Client_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Client.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Network.Client'])

