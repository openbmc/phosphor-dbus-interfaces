sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../NMI.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.Host.NMI'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../NMI.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.Host.NMI'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/Host/NMI')

install_data(
  '../NMI.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control/Host')

_sdbusplus_xyz_openbmc_project_Control_Host_NMI_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../NMI.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Control.Host.NMI'])

