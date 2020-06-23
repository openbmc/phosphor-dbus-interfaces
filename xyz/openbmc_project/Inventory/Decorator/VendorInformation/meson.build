generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../VendorInformation.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Decorator.VendorInformation'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../VendorInformation.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Decorator.VendorInformation'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Decorator/VendorInformation')

install_data(
  '../VendorInformation.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Inventory/Decorator')

xyz_openbmc_project_Inventory_Decorator_VendorInformation_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../VendorInformation.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Inventory.Decorator.VendorInformation'])

