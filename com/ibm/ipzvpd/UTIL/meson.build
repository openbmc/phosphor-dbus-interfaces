sources_com_ibm += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../UTIL.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.UTIL'])

sources_com_ibm += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../UTIL.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.UTIL'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/UTIL')

install_data(
  '../UTIL.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/ipzvpd')

_sdbusplus_com_ibm_ipzvpd_UTIL_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../UTIL.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'com.ibm.ipzvpd.UTIL'])

