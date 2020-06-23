sources_xyz_openbmc_project += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Inventory.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Inventory'])

sources_xyz_openbmc_project += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Inventory.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Inventory'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory')

install_data(
  '../Inventory.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project')

_sdbusplus_xyz_openbmc_project_Inventory_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../Inventory.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'markdown', 'xyz.openbmc_project.Inventory'])
_sdbusplus_xyz_openbmc_project_Inventory_Manager_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Item_md = []
subdir('Item')
subdir('Decorator')
subdir('Manager')
subdir('Source')

custom_target(
  'Manager.md',
  output: 'Manager.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Manager_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Manager.md')

custom_target(
  'Item.md',
  output: 'Item.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Item_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item.md')
