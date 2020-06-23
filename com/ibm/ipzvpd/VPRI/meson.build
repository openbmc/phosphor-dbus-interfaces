sources_com_ibm += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VPRI.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.VPRI'])

sources_com_ibm += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VPRI.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.VPRI'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/VPRI')

install_data(
  '../VPRI.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/ipzvpd')

_sdbusplus_com_ibm_ipzvpd_VPRI_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../VPRI.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'com.ibm.ipzvpd.VPRI'])

