generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VMSC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.VMSC'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VMSC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.VMSC'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/VMSC')

install_data(
  '../VMSC.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/ipzvpd')

