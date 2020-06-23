generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Attributes.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.User.Attributes'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Attributes.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.User.Attributes'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/User/Attributes')

install_data(
  '../Attributes.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/User')

