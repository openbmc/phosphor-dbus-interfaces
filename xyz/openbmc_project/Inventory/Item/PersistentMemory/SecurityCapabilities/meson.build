sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../SecurityCapabilities.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Item.PersistentMemory.SecurityCapabilities'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../SecurityCapabilities.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Item.PersistentMemory.SecurityCapabilities'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Item/PersistentMemory/SecurityCapabilities')

install_data(
  '../SecurityCapabilities.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Inventory/Item/PersistentMemory')

_sdbusplus_xyz_openbmc_project_Inventory_Item_PersistentMemory_SecurityCapabilities_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../SecurityCapabilities.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Inventory.Item.PersistentMemory.SecurityCapabilities'])

