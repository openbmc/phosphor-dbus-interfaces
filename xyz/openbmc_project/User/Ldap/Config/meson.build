sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Config.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.User.Ldap.Config'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Config.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.User.Ldap.Config'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/User/Ldap/Config')

install_data(
  '../Config.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/User/Ldap')

_sdbusplus_xyz_openbmc_project_User_Ldap_Config_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Config.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.User.Ldap.Config'])

