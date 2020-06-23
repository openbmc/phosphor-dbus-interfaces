generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Access.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'org.open_power.Host.Access'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Access.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'org.open_power.Host.Access'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/Host/Access')

