generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VINI.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.VINI'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VINI.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.VINI'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/VINI')

install_data(
  '../VINI.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/ipzvpd')

com_ibm_ipzvpd_VINI_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../VINI.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'com.ibm.ipzvpd.VINI'])

