generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VR10.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.VR10'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VR10.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.VR10'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/VR10')

