generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Manager.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Manager'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Manager.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Manager'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Manager')

install_data(
  '../Manager.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Inventory')

xyz_openbmc_project_Inventory_Manager_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Manager.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Inventory.Manager'])

