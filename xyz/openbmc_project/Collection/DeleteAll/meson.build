generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../DeleteAll.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Collection.DeleteAll'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../DeleteAll.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Collection.DeleteAll'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Collection/DeleteAll')

