generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../IPMI.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Logging.IPMI'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../IPMI.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Logging.IPMI'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Logging/IPMI')

install_data(
  '../IPMI.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Logging')

xyz_openbmc_project_Logging_IPMI_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../IPMI.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Logging.IPMI'])

