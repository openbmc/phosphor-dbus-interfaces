generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VCEN.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.VCEN'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VCEN.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.VCEN'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/VCEN')

install_data(
  '../VCEN.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/ipzvpd')

com_ibm_ipzvpd_VCEN_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../VCEN.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'com.ibm.ipzvpd.VCEN'])

