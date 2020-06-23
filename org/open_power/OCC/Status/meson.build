generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Status.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'org.open_power.OCC.Status'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Status.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'org.open_power.OCC.Status'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/OCC/Status')

install_data(
  '../Status.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/org/open_power/OCC')

