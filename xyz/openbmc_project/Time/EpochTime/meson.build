generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../EpochTime.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Time.EpochTime'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../EpochTime.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Time.EpochTime'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Time/EpochTime')

install_data(
  '../EpochTime.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Time')

xyz_openbmc_project_Time_EpochTime_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../EpochTime.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Time.EpochTime'])

