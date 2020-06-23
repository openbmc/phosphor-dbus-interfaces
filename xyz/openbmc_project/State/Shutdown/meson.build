xyz_openbmc_project_State_Shutdown_ThermalEvent_md = []
xyz_openbmc_project_State_Shutdown_Inventory_md = []
xyz_openbmc_project_State_Shutdown_Power_md = []
subdir('Power')
subdir('Inventory')
subdir('ThermalEvent')

custom_target(
  'ThermalEvent.md',
  output: 'ThermalEvent.md',
  input: xyz_openbmc_project_State_Shutdown_ThermalEvent_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/Shutdown/ThermalEvent.md')

custom_target(
  'Inventory.md',
  output: 'Inventory.md',
  input: xyz_openbmc_project_State_Shutdown_Inventory_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/Shutdown/Inventory.md')

custom_target(
  'Power.md',
  output: 'Power.md',
  input: xyz_openbmc_project_State_Shutdown_Power_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/Shutdown/Power.md')
