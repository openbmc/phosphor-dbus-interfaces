generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Cap.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.Power.Cap'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Cap.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.Power.Cap'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/Power/Cap')

install_data(
  '../Cap.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control/Power')

xyz_openbmc_project_Control_Power_Cap_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Cap.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Control.Power.Cap'])

