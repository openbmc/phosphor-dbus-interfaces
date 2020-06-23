generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VRTN.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.VRTN'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VRTN.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.VRTN'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/VRTN')

install_data(
  '../VRTN.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/ipzvpd')

