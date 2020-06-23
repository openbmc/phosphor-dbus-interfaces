generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Common.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.User.Common'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Common.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.User.Common'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/User/Common')

install_data(
  '../Common.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/User')

xyz_openbmc_project_User_Common_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../Common.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'markdown', 'xyz.openbmc_project.User.Common'])
