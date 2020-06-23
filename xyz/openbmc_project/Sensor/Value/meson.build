generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Value.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Sensor.Value'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Value.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Sensor.Value'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Sensor/Value')

install_data(
  '../Value.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Sensor')

xyz_openbmc_project_Sensor_Value_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Value.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Sensor.Value'])

