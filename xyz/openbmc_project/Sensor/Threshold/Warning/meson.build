sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Warning.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Sensor.Threshold.Warning'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Warning.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Sensor.Threshold.Warning'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Sensor/Threshold/Warning')

install_data(
  '../Warning.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Sensor/Threshold')

_sdbusplus_xyz_openbmc_project_Sensor_Threshold_Warning_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Warning.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Sensor.Threshold.Warning'])

