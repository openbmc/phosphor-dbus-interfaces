sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../CSR.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Certs.CSR'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../CSR.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Certs.CSR'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Certs/CSR')

install_data(
  '../CSR.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Certs')

_sdbusplus_xyz_openbmc_project_Certs_CSR_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../CSR.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Certs.CSR'])

_sdbusplus_xyz_openbmc_project_Certs_CSR_Create_md = []
subdir('Create')

custom_target(
  'Create.md',
  output: 'Create.md',
  input: _sdbusplus_xyz_openbmc_project_Certs_CSR_Create_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Certs/CSR/Create.md')
