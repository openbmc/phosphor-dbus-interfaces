generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Maximum.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'org.open_power.Sensor.Aggregation.History.Maximum'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Maximum.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'org.open_power.Sensor.Aggregation.History.Maximum'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/Sensor/Aggregation/History/Maximum')

install_data(
  '../Maximum.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/org/open_power/Sensor/Aggregation/History')

org_open_power_Sensor_Aggregation_History_Maximum_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Maximum.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'org.open_power.Sensor.Aggregation.History.Maximum'])

