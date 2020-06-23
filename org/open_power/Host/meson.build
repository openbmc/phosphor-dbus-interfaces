generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Host.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'org.open_power.Host'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Host.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'org.open_power.Host'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/Host')

install_data(
  '../Host.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/org/open_power')

subdir('Access')
