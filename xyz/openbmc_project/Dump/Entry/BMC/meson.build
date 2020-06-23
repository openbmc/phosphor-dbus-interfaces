sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../BMC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Dump.Entry.BMC'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../BMC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Dump.Entry.BMC'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Dump/Entry/BMC')

install_data(
  '../BMC.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Dump/Entry')

_sdbusplus_xyz_openbmc_project_Dump_Entry_BMC_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../BMC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Dump.Entry.BMC'])

