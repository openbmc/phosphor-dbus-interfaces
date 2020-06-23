generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../ChassisCapabilities.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.ChassisCapabilities'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../ChassisCapabilities.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.ChassisCapabilities'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/ChassisCapabilities')

