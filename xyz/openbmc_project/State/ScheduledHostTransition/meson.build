sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../ScheduledHostTransition.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.State.ScheduledHostTransition'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../ScheduledHostTransition.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.State.ScheduledHostTransition'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/ScheduledHostTransition')

install_data(
  '../ScheduledHostTransition.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/State')

_sdbusplus_xyz_openbmc_project_State_ScheduledHostTransition_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../ScheduledHostTransition.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.State.ScheduledHostTransition'])

