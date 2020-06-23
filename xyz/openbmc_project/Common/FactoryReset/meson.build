generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../FactoryReset.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Common.FactoryReset'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../FactoryReset.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Common.FactoryReset'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Common/FactoryReset')

install_data(
  '../FactoryReset.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Common')

xyz_openbmc_project_Common_FactoryReset_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../FactoryReset.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Common.FactoryReset'])

