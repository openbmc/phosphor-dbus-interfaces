generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VW10.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.VW10'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VW10.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.VW10'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/VW10')

install_data(
  '../VW10.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm/ipzvpd')

com_ibm_ipzvpd_VW10_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../VW10.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'com.ibm.ipzvpd.VW10'])

