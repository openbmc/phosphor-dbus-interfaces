sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../SocketAttributes.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.Service.SocketAttributes'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../SocketAttributes.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.Service.SocketAttributes'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/Service/SocketAttributes')

install_data(
  '../SocketAttributes.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control/Service')

_sdbusplus_xyz_openbmc_project_Control_Service_SocketAttributes_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../SocketAttributes.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Control.Service.SocketAttributes'])

