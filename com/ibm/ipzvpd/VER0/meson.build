generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VER0.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.VER0'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VER0.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.VER0'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/VER0')

install_data(
  '../VER0.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/ipzvpd')

