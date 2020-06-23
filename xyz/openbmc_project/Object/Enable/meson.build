generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Enable.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Object.Enable'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Enable.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Object.Enable'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Object/Enable')

install_data(
  '../Enable.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Object')

