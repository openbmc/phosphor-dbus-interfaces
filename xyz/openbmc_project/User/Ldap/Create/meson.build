generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Create.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.User.Ldap.Create'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Create.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.User.Ldap.Create'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/User/Ldap/Create')

install_data(
  '../Create.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/User/Ldap')

