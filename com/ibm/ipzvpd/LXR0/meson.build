generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../LXR0.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'com.ibm.ipzvpd.LXR0'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../LXR0.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'com.ibm.ipzvpd.LXR0'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/ipzvpd/LXR0')

