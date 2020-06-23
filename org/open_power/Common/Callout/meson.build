generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Callout.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'org.open_power.Common.Callout'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Callout.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'org.open_power.Common.Callout'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/Common/Callout')

