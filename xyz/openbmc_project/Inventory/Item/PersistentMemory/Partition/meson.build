generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Partition.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Item.PersistentMemory.Partition'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Partition.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Item.PersistentMemory.Partition'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Item/PersistentMemory/Partition')

