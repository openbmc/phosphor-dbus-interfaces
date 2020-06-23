sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Certificate.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Certs.Certificate'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Certificate.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Certs.Certificate'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Certs/Certificate')

install_data(
  '../Certificate.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Certs')

_sdbusplus_xyz_openbmc_project_Certs_Certificate_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Certificate.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Certs.Certificate'])

