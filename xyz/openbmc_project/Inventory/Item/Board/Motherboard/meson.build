generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Motherboard.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Item.Board.Motherboard'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Motherboard.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Item.Board.Motherboard'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Item/Board/Motherboard')

install_data(
  '../Motherboard.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Inventory/Item/Board')

xyz_openbmc_project_Inventory_Item_Board_Motherboard_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Motherboard.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Inventory.Item.Board.Motherboard'])

