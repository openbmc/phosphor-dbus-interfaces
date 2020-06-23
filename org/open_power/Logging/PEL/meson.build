generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../PEL.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'org.open_power.Logging.PEL'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../PEL.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'org.open_power.Logging.PEL'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/Logging/PEL')

install_data(
  '../PEL.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/org/open_power/Logging')

