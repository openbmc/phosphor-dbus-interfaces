_sdbusplus_org_open_power_Sensor_Aggregation_History_Average_md = []
_sdbusplus_org_open_power_Sensor_Aggregation_History_Maximum_md = []
subdir('Average')
subdir('Maximum')

custom_target(
  'Average.md',
  output: 'Average.md',
  input: _sdbusplus_org_open_power_Sensor_Aggregation_History_Average_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'org/open_power/Sensor/Aggregation/History/Average.md')

custom_target(
  'Maximum.md',
  output: 'Maximum.md',
  input: _sdbusplus_org_open_power_Sensor_Aggregation_History_Maximum_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'org/open_power/Sensor/Aggregation/History/Maximum.md')
