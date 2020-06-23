sources_org_open_power += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Asset.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'org.open_power.Inventory.Decorator.Asset'])

sources_org_open_power += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Asset.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'org.open_power.Inventory.Decorator.Asset'],
  install: true,
  install_dir: get_option('includedir') / 'org/open_power/Inventory/Decorator/Asset')

install_data(
  '../Asset.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/org/open_power/Inventory/Decorator')

_sdbusplus_org_open_power_Inventory_Decorator_Asset_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Asset.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'org.open_power.Inventory.Decorator.Asset'])

