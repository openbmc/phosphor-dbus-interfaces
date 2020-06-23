generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Time.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Time'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Time.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Time'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Time')

install_data(
  '../Time.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project')

subdir('Synchronization')
subdir('EpochTime')
