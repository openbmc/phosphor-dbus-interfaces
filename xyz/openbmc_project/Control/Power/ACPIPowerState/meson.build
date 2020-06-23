sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../ACPIPowerState.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.Power.ACPIPowerState'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../ACPIPowerState.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.Power.ACPIPowerState'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/Power/ACPIPowerState')

install_data(
  '../ACPIPowerState.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control/Power')

_sdbusplus_xyz_openbmc_project_Control_Power_ACPIPowerState_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../ACPIPowerState.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Control.Power.ACPIPowerState'])

