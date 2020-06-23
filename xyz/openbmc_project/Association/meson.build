generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Association.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Association'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Association.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Association'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Association')

install_data(
  '../Association.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project')

xyz_openbmc_project_Association_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Association.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Association'])

xyz_openbmc_project_Association_Definitions_md = []
subdir('Definitions')

custom_target(
  'Definitions.md',
  output: 'Definitions.md',
  input: xyz_openbmc_project_Association_Definitions_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Association/Definitions.md')
