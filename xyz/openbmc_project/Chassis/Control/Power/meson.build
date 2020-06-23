generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Power.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Chassis.Control.Power'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Power.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Chassis.Control.Power'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Chassis/Control/Power')

