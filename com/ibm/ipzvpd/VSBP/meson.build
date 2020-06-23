generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VSBP.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.VSBP'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VSBP.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.VSBP'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/VSBP')

install_data(
  '../VSBP.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/ipzvpd')

