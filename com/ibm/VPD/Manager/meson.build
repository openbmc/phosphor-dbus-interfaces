generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Manager.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.VPD.Manager'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Manager.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.VPD.Manager'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/VPD/Manager')

