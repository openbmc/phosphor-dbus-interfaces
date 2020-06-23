generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Revision.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Decorator.Revision'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Revision.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Decorator.Revision'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Decorator/Revision')

install_data(
  '../Revision.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Inventory/Decorator')

xyz_openbmc_project_Inventory_Decorator_Revision_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Revision.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Inventory.Decorator.Revision'])

