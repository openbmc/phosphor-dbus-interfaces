generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Policy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.Logging.Policy'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Policy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.Logging.Policy'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/Logging/Policy')

