generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../ApplyOptions.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Software.ApplyOptions'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../ApplyOptions.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Software.ApplyOptions'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Software/ApplyOptions')

