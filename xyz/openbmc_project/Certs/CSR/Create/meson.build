generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Create.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Certs.CSR.Create'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Create.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Certs.CSR.Create'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Certs/CSR/Create')

install_data(
  '../Create.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Certs/CSR')

xyz_openbmc_project_Certs_CSR_Create_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Create.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Certs.CSR.Create'])

