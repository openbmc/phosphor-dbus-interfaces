generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../FilePath.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Common.FilePath'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../FilePath.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Common.FilePath'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Common/FilePath')

install_data(
  '../FilePath.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Common')

xyz_openbmc_project_Common_FilePath_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../FilePath.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Common.FilePath'])

