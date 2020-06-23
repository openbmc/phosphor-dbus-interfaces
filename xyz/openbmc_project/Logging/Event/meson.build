generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Event.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Logging.Event'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Event.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Logging.Event'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Logging/Event')

install_data(
  '../Event.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Logging')

xyz_openbmc_project_Logging_Event_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Event.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Logging.Event'])

