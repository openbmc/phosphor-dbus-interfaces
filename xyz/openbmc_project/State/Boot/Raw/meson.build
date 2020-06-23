sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Raw.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.State.Boot.Raw'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Raw.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.State.Boot.Raw'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/Boot/Raw')

install_data(
  '../Raw.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/State/Boot')

_sdbusplus_xyz_openbmc_project_State_Boot_Raw_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Raw.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.State.Boot.Raw'])

