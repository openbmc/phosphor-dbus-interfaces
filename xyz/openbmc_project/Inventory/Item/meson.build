generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Item.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Item'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Item.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Item'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Item')

install_data(
  '../Item.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Inventory')

subdir('Connector')
subdir('Board')
subdir('Chassis')
subdir('CpuCore')
subdir('Panel')
subdir('Vrm')
subdir('Accelerator')
subdir('Cpu')
subdir('Fan')
subdir('Ethernet')
subdir('DiskBackplane')
subdir('MemoryBuffer')
subdir('Bmc')
subdir('PCIeDevice')
subdir('Global')
subdir('StorageController')
subdir('NetworkInterface')
subdir('PowerSupply')
subdir('PersistentMemory')
subdir('System')
subdir('Dimm')
subdir('Tpm')
