generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../VPD.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'com.ibm.VPD'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../VPD.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'com.ibm.VPD'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/VPD')

install_data(
  '../VPD.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm')

subdir('Manager')
