generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Association.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Association'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Association.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Association'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Association')

subdir('Definitions')
