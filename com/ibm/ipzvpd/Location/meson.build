generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Location.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.Location'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Location.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.Location'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/Location')

