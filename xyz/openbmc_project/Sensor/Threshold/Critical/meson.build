generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Critical.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Sensor.Threshold.Critical'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Critical.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Sensor.Threshold.Critical'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Sensor/Threshold/Critical')

install_data(
  '../Critical.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Sensor/Threshold')

