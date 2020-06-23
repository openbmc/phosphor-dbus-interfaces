sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Proxy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.VirtualMedia.Proxy'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Proxy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.VirtualMedia.Proxy'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/VirtualMedia/Proxy')

install_data(
  '../Proxy.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/VirtualMedia')

_sdbusplus_xyz_openbmc_project_VirtualMedia_Proxy_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Proxy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.VirtualMedia.Proxy'])

