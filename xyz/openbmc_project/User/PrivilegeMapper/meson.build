generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../PrivilegeMapper.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.User.PrivilegeMapper'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../PrivilegeMapper.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.User.PrivilegeMapper'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/User/PrivilegeMapper')

install_data(
  '../PrivilegeMapper.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/User')

xyz_openbmc_project_User_PrivilegeMapper_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../PrivilegeMapper.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.User.PrivilegeMapper'])

