sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Bond.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Network.Experimental.Bond'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Bond.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Network.Experimental.Bond'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Network/Experimental/Bond')

install_data(
  '../Bond.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Network/Experimental')

_sdbusplus_xyz_openbmc_project_Network_Experimental_Bond_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Bond.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Network.Experimental.Bond'])

