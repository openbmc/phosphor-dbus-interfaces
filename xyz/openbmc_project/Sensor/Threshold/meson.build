generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Threshold.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Sensor.Threshold'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Threshold.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Sensor.Threshold'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Sensor/Threshold')

subdir('Warning')
subdir('Critical')
