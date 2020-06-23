generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../NMI.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Chassis.Buttons.NMI'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../NMI.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Chassis.Buttons.NMI'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Chassis/Buttons/NMI')

