generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Reset.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Chassis.Buttons.Reset'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Reset.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Chassis.Buttons.Reset'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Chassis/Buttons/Reset')

install_data(
  '../Reset.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Chassis/Buttons')

xyz_openbmc_project_Chassis_Buttons_Reset_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Reset.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Chassis.Buttons.Reset'])

