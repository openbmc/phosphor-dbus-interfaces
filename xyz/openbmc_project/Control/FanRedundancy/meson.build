generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../FanRedundancy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.FanRedundancy'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../FanRedundancy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.FanRedundancy'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/FanRedundancy')

