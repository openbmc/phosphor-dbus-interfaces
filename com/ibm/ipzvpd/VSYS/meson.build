generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VSYS.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.VSYS'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VSYS.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.VSYS'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/VSYS')

