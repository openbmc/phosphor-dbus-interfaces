generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Host.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'org.open_power.Control.Host'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Host.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'org.open_power.Control.Host'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/Control/Host')

install_data(
  '../Host.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/org/open_power/Control')

org_open_power_Control_Host_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Host.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'org.open_power.Control.Host'])

