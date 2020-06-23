sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../ChannelAccess.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Channel.ChannelAccess'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../ChannelAccess.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Channel.ChannelAccess'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Channel/ChannelAccess')

install_data(
  '../ChannelAccess.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Channel')

_sdbusplus_xyz_openbmc_project_Channel_ChannelAccess_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../ChannelAccess.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Channel.ChannelAccess'])

