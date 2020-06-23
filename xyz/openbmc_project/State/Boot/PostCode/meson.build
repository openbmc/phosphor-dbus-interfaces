sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../PostCode.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.State.Boot.PostCode'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../PostCode.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.State.Boot.PostCode'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/Boot/PostCode')

install_data(
  '../PostCode.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/State/Boot')

_sdbusplus_xyz_openbmc_project_State_Boot_PostCode_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../PostCode.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.State.Boot.PostCode'])

