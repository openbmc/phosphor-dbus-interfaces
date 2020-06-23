generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Warning.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Sensor.Threshold.Warning'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Warning.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Sensor.Threshold.Warning'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Sensor/Threshold/Warning')

install_data(
  '../Warning.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Sensor/Threshold')

