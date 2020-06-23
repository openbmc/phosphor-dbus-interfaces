generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../UUID.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Common.UUID'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../UUID.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Common.UUID'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Common/UUID')

