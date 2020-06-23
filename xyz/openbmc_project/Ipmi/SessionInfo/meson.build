sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../SessionInfo.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Ipmi.SessionInfo'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../SessionInfo.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Ipmi.SessionInfo'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Ipmi/SessionInfo')

install_data(
  '../SessionInfo.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Ipmi')

_sdbusplus_xyz_openbmc_project_Ipmi_SessionInfo_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../SessionInfo.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Ipmi.SessionInfo'])

