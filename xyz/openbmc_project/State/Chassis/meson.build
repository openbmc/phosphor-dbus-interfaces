generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Chassis.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.State.Chassis'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Chassis.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.State.Chassis'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/Chassis')

generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Chassis.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.State.Chassis'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Chassis.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.State.Chassis'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/Chassis')

