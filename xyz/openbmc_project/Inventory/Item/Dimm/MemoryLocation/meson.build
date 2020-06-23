generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../MemoryLocation.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Item.Dimm.MemoryLocation'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../MemoryLocation.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Item.Dimm.MemoryLocation'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Item/Dimm/MemoryLocation')

