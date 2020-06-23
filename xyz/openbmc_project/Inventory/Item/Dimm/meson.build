generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Dimm.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Item.Dimm'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Dimm.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Item.Dimm'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Item/Dimm')

install_data(
  '../Dimm.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Inventory/Item')

xyz_openbmc_project_Inventory_Item_Dimm_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Dimm.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Inventory.Item.Dimm'])

xyz_openbmc_project_Inventory_Item_Dimm_MemoryLocation_md = []
subdir('MemoryLocation')

custom_target(
  'MemoryLocation.md',
  output: 'MemoryLocation.md',
  input: xyz_openbmc_project_Inventory_Item_Dimm_MemoryLocation_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Dimm/MemoryLocation.md')
