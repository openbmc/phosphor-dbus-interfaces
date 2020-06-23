generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../ID.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Chassis.Buttons.ID'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../ID.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Chassis.Buttons.ID'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Chassis/Buttons/ID')

