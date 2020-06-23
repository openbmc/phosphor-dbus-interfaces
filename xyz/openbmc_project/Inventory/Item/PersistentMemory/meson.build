sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../PersistentMemory.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Item.PersistentMemory'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../PersistentMemory.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Item.PersistentMemory'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Item/PersistentMemory')

install_data(
  '../PersistentMemory.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Inventory/Item')

_sdbusplus_xyz_openbmc_project_Inventory_Item_PersistentMemory_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../PersistentMemory.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Inventory.Item.PersistentMemory'])

_sdbusplus_xyz_openbmc_project_Inventory_Item_PersistentMemory_PowerManagementPolicy_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_PersistentMemory_Partition_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_PersistentMemory_SecurityCapabilities_md = []
subdir('Partition')
subdir('PowerManagementPolicy')
subdir('SecurityCapabilities')

custom_target(
  'PowerManagementPolicy.md',
  output: 'PowerManagementPolicy.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_PersistentMemory_PowerManagementPolicy_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/PersistentMemory/PowerManagementPolicy.md')

custom_target(
  'Partition.md',
  output: 'Partition.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_PersistentMemory_Partition_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/PersistentMemory/Partition.md')

custom_target(
  'SecurityCapabilities.md',
  output: 'SecurityCapabilities.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_PersistentMemory_SecurityCapabilities_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/PersistentMemory/SecurityCapabilities.md')
