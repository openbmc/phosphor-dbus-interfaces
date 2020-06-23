sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Attributes.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.Service.Attributes'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Attributes.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.Service.Attributes'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/Service/Attributes')

install_data(
  '../Attributes.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control/Service')

_sdbusplus_xyz_openbmc_project_Control_Service_Attributes_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Attributes.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Control.Service.Attributes'])

