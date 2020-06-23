generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../SecurityCapabilities.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Item.PersistentMemory.SecurityCapabilities'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../SecurityCapabilities.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Item.PersistentMemory.SecurityCapabilities'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Item/PersistentMemory/SecurityCapabilities')

