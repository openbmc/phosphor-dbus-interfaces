generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Chassis.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Item.Chassis'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Chassis.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Item.Chassis'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Item/Chassis')

install_data(
  '../Chassis.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Inventory/Item')

xyz_openbmc_project_Inventory_Item_Chassis_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Chassis.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Inventory.Item.Chassis'])

