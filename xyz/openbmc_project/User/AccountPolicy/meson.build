generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../AccountPolicy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.User.AccountPolicy'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../AccountPolicy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.User.AccountPolicy'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/User/AccountPolicy')

install_data(
  '../AccountPolicy.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/User')

xyz_openbmc_project_User_AccountPolicy_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../AccountPolicy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.User.AccountPolicy'])

