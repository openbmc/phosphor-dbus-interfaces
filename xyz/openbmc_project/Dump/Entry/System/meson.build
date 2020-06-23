sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../System.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Dump.Entry.System'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../System.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Dump.Entry.System'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Dump/Entry/System')

install_data(
  '../System.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Dump/Entry')

_sdbusplus_xyz_openbmc_project_Dump_Entry_System_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../System.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Dump.Entry.System'])

