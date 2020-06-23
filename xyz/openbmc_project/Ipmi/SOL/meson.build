sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../SOL.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Ipmi.SOL'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../SOL.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Ipmi.SOL'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Ipmi/SOL')

install_data(
  '../SOL.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Ipmi')

_sdbusplus_xyz_openbmc_project_Ipmi_SOL_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../SOL.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Ipmi.SOL'])

