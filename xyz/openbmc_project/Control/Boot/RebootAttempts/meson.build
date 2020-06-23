sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../RebootAttempts.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.Boot.RebootAttempts'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../RebootAttempts.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.Boot.RebootAttempts'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/Boot/RebootAttempts')

install_data(
  '../RebootAttempts.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control/Boot')

_sdbusplus_xyz_openbmc_project_Control_Boot_RebootAttempts_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../RebootAttempts.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Control.Boot.RebootAttempts'])

