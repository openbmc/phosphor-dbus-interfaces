generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VCFG.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.VCFG'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VCFG.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.VCFG'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/VCFG')

install_data(
  '../VCFG.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/ipzvpd')

