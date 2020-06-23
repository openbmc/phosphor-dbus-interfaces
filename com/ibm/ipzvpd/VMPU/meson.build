generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VMPU.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.VMPU'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VMPU.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.VMPU'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/VMPU')

