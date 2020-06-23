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

install_data(
  '../Threshold.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Sensor')

xyz_openbmc_project_Sensor_Threshold_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../Threshold.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'markdown', 'xyz.openbmc_project.Sensor.Threshold'])
xyz_openbmc_project_Sensor_Threshold_Critical_md = []
xyz_openbmc_project_Sensor_Threshold_Warning_md = []
subdir('Warning')
subdir('Critical')

custom_target(
  'Critical.md',
  output: 'Critical.md',
  input: xyz_openbmc_project_Sensor_Threshold_Critical_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Sensor/Threshold/Critical.md')

custom_target(
  'Warning.md',
  output: 'Warning.md',
  input: xyz_openbmc_project_Sensor_Threshold_Warning_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Sensor/Threshold/Warning.md')
