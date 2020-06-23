sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../RequestedRedundancyPriority.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Software.RequestedRedundancyPriority'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../RequestedRedundancyPriority.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Software.RequestedRedundancyPriority'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Software/RequestedRedundancyPriority')

install_data(
  '../RequestedRedundancyPriority.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Software')

_sdbusplus_xyz_openbmc_project_Software_RequestedRedundancyPriority_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../RequestedRedundancyPriority.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Software.RequestedRedundancyPriority'])

