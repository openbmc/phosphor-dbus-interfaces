generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../PrivilegeMapperEntry.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.User.PrivilegeMapperEntry'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../PrivilegeMapperEntry.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.User.PrivilegeMapperEntry'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/User/PrivilegeMapperEntry')

install_data(
  '../PrivilegeMapperEntry.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/User')

xyz_openbmc_project_User_PrivilegeMapperEntry_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../PrivilegeMapperEntry.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.User.PrivilegeMapperEntry'])

