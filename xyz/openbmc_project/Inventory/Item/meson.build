sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Item.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Item'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Item.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Item'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Item')

install_data(
  '../Item.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Inventory')

_sdbusplus_xyz_openbmc_project_Inventory_Item_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Item.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Inventory.Item'])

_sdbusplus_xyz_openbmc_project_Inventory_Item_Dimm_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_DiskBackplane_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_Tpm_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_PowerSupply_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_Global_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_PCIeDevice_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_Cpu_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_Bmc_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_Accelerator_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_Vrm_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_Panel_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_CpuCore_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_Connector_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_Chassis_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_Fan_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_Board_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_PersistentMemory_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_System_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_NetworkInterface_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_StorageController_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_MemoryBuffer_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_Ethernet_md = []
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

custom_target(
  'Dimm.md',
  output: 'Dimm.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_Dimm_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Dimm.md')

custom_target(
  'DiskBackplane.md',
  output: 'DiskBackplane.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_DiskBackplane_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/DiskBackplane.md')

custom_target(
  'Tpm.md',
  output: 'Tpm.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_Tpm_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Tpm.md')

custom_target(
  'PowerSupply.md',
  output: 'PowerSupply.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_PowerSupply_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/PowerSupply.md')

custom_target(
  'Global.md',
  output: 'Global.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_Global_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Global.md')

custom_target(
  'PCIeDevice.md',
  output: 'PCIeDevice.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_PCIeDevice_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/PCIeDevice.md')

custom_target(
  'Cpu.md',
  output: 'Cpu.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_Cpu_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Cpu.md')

custom_target(
  'Bmc.md',
  output: 'Bmc.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_Bmc_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Bmc.md')

custom_target(
  'Accelerator.md',
  output: 'Accelerator.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_Accelerator_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Accelerator.md')

custom_target(
  'Vrm.md',
  output: 'Vrm.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_Vrm_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Vrm.md')

custom_target(
  'Panel.md',
  output: 'Panel.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_Panel_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Panel.md')

custom_target(
  'CpuCore.md',
  output: 'CpuCore.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_CpuCore_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/CpuCore.md')

custom_target(
  'Connector.md',
  output: 'Connector.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_Connector_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Connector.md')

custom_target(
  'Chassis.md',
  output: 'Chassis.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_Chassis_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Chassis.md')

custom_target(
  'Fan.md',
  output: 'Fan.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_Fan_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Fan.md')

custom_target(
  'Board.md',
  output: 'Board.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_Board_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Board.md')

custom_target(
  'PersistentMemory.md',
  output: 'PersistentMemory.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_PersistentMemory_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/PersistentMemory.md')

custom_target(
  'System.md',
  output: 'System.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_System_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/System.md')

custom_target(
  'NetworkInterface.md',
  output: 'NetworkInterface.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_NetworkInterface_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/NetworkInterface.md')

custom_target(
  'StorageController.md',
  output: 'StorageController.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_StorageController_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/StorageController.md')

custom_target(
  'MemoryBuffer.md',
  output: 'MemoryBuffer.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_MemoryBuffer_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/MemoryBuffer.md')

custom_target(
  'Ethernet.md',
  output: 'Ethernet.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_Ethernet_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Ethernet.md')
