sources_org_open_power += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Average.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'org.open_power.Sensor.Aggregation.History.Average'])

sources_org_open_power += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Average.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'org.open_power.Sensor.Aggregation.History.Average'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/Sensor/Aggregation/History/Average')

install_data(
  '../Average.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/org/open_power/Sensor/Aggregation/History')

_sdbusplus_org_open_power_Sensor_Aggregation_History_Average_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Average.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'org.open_power.Sensor.Aggregation.History.Average'])

