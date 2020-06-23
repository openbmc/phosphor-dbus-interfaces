generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Board.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Item.Board'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Board.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Item.Board'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Item/Board')

install_data(
  '../Board.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Inventory/Item')

xyz_openbmc_project_Inventory_Item_Board_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Board.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Inventory.Item.Board'])

xyz_openbmc_project_Inventory_Item_Board_Motherboard_md = []
xyz_openbmc_project_Inventory_Item_Board_IOBoard_md = []
subdir('Motherboard')
subdir('IOBoard')

custom_target(
  'Motherboard.md',
  output: 'Motherboard.md',
  input: xyz_openbmc_project_Inventory_Item_Board_Motherboard_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Board/Motherboard.md')

custom_target(
  'IOBoard.md',
  output: 'IOBoard.md',
  input: xyz_openbmc_project_Inventory_Item_Board_IOBoard_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Item/Board/IOBoard.md')
