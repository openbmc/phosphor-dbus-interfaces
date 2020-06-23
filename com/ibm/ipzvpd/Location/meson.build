sources_com_ibm += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Location.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.Location'])

sources_com_ibm += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Location.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.Location'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/Location')

install_data(
  '../Location.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/ipzvpd')

_sdbusplus_com_ibm_ipzvpd_Location_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Location.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'com.ibm.ipzvpd.Location'])

