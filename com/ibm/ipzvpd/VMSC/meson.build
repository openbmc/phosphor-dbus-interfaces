sources_com_ibm += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VMSC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.VMSC'])

sources_com_ibm += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VMSC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.VMSC'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/VMSC')

install_data(
  '../VMSC.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/ipzvpd')

_sdbusplus_com_ibm_ipzvpd_VMSC_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../VMSC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'com.ibm.ipzvpd.VMSC'])

