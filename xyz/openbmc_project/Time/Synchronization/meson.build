generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Synchronization.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Time.Synchronization'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Synchronization.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Time.Synchronization'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Time/Synchronization')

install_data(
  '../Synchronization.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Time')

xyz_openbmc_project_Time_Synchronization_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Synchronization.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Time.Synchronization'])

