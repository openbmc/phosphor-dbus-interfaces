xyz_openbmc_project_Sensor_Value_md = []
xyz_openbmc_project_Sensor_Threshold_md = []
xyz_openbmc_project_Sensor_Device_md = []
subdir('Value')
subdir('Device')
subdir('Threshold')

custom_target(
  'Value.md',
  output: 'Value.md',
  input: xyz_openbmc_project_Sensor_Value_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Sensor/Value.md')

custom_target(
  'Threshold.md',
  output: 'Threshold.md',
  input: xyz_openbmc_project_Sensor_Threshold_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Sensor/Threshold.md')

custom_target(
  'Device.md',
  output: 'Device.md',
  input: xyz_openbmc_project_Sensor_Device_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Sensor/Device.md')
