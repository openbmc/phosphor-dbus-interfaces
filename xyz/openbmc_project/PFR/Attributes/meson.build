generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Attributes.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.PFR.Attributes'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Attributes.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.PFR.Attributes'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/PFR/Attributes')

