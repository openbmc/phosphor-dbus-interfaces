sources_com_ibm += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Manager.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'com.ibm.VPD.Manager'])

sources_com_ibm += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Manager.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'com.ibm.VPD.Manager'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/VPD/Manager')

install_data(
  '../Manager.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/VPD')

_sdbusplus_com_ibm_VPD_Manager_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Manager.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'com.ibm.VPD.Manager'])

