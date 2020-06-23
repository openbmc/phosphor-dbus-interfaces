generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Accelerator.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Item.Accelerator'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Accelerator.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Item.Accelerator'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Item/Accelerator')

install_data(
  '../Accelerator.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Inventory/Item')

xyz_openbmc_project_Inventory_Item_Accelerator_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Accelerator.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Inventory.Item.Accelerator'])

