generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../DINF.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.DINF'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../DINF.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.DINF'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/DINF')

