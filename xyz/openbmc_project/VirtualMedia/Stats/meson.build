sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Stats.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.VirtualMedia.Stats'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Stats.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.VirtualMedia.Stats'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/VirtualMedia/Stats')

install_data(
  '../Stats.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/VirtualMedia')

_sdbusplus_xyz_openbmc_project_VirtualMedia_Stats_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Stats.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.VirtualMedia.Stats'])

