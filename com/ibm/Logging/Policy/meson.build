sources_com_ibm += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Policy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'com.ibm.Logging.Policy'])

sources_com_ibm += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Policy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'com.ibm.Logging.Policy'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/Logging/Policy')

install_data(
  '../Policy.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/Logging')

_sdbusplus_com_ibm_Logging_Policy_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Policy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'com.ibm.Logging.Policy'])

