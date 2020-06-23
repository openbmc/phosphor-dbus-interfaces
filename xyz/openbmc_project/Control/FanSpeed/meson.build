generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../FanSpeed.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.FanSpeed'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../FanSpeed.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.FanSpeed'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/FanSpeed')

install_data(
  '../FanSpeed.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control')

xyz_openbmc_project_Control_FanSpeed_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../FanSpeed.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Control.FanSpeed'])

