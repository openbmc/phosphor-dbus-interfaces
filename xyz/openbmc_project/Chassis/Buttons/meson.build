_sdbusplus_xyz_openbmc_project_Chassis_Buttons_ID_md = []
_sdbusplus_xyz_openbmc_project_Chassis_Buttons_NMI_md = []
_sdbusplus_xyz_openbmc_project_Chassis_Buttons_Power_md = []
_sdbusplus_xyz_openbmc_project_Chassis_Buttons_Reset_md = []
subdir('Power')
subdir('ID')
subdir('Reset')
subdir('NMI')

custom_target(
  'ID.md',
  output: 'ID.md',
  input: _sdbusplus_xyz_openbmc_project_Chassis_Buttons_ID_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Chassis/Buttons/ID.md')

custom_target(
  'NMI.md',
  output: 'NMI.md',
  input: _sdbusplus_xyz_openbmc_project_Chassis_Buttons_NMI_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Chassis/Buttons/NMI.md')

custom_target(
  'Power.md',
  output: 'Power.md',
  input: _sdbusplus_xyz_openbmc_project_Chassis_Buttons_Power_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Chassis/Buttons/Power.md')

custom_target(
  'Reset.md',
  output: 'Reset.md',
  input: _sdbusplus_xyz_openbmc_project_Chassis_Buttons_Reset_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Chassis/Buttons/Reset.md')
