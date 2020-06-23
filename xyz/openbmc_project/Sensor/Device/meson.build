generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Device.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Sensor.Device'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Device.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Sensor.Device'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Sensor/Device')

install_data(
  '../Device.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Sensor')

