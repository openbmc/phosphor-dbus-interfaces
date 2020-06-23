generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Watchdog.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.State.Watchdog'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Watchdog.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.State.Watchdog'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/Watchdog')

install_data(
  '../Watchdog.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/State')

xyz_openbmc_project_State_Watchdog_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Watchdog.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.State.Watchdog'])

