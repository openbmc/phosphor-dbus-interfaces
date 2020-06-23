generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../CoolingType.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Decorator.CoolingType'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../CoolingType.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Decorator.CoolingType'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Decorator/CoolingType')

install_data(
  '../CoolingType.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Inventory/Decorator')

xyz_openbmc_project_Inventory_Decorator_CoolingType_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../CoolingType.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Inventory.Decorator.CoolingType'])

