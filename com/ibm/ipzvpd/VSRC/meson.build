generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VSRC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.VSRC'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VSRC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.VSRC'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/VSRC')

install_data(
  '../VSRC.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/ipzvpd')

com_ibm_ipzvpd_VSRC_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../VSRC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'com.ibm.ipzvpd.VSRC'])

