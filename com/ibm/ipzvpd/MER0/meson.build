sources_com_ibm += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../MER0.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.MER0'])

sources_com_ibm += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../MER0.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.MER0'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/MER0')

install_data(
  '../MER0.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/ipzvpd')

_sdbusplus_com_ibm_ipzvpd_MER0_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../MER0.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'com.ibm.ipzvpd.MER0'])

