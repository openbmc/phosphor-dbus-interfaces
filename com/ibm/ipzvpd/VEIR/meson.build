generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VEIR.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.VEIR'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VEIR.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.VEIR'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/VEIR')

install_data(
  '../VEIR.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/ipzvpd')

com_ibm_ipzvpd_VEIR_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../VEIR.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'com.ibm.ipzvpd.VEIR'])

