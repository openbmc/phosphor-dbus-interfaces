generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../SOL.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Ipmi.SOL'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../SOL.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Ipmi.SOL'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Ipmi/SOL')

