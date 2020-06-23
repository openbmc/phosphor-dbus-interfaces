generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Legacy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.VirtualMedia.Legacy'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Legacy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.VirtualMedia.Legacy'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/VirtualMedia/Legacy')

install_data(
  '../Legacy.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/VirtualMedia')

