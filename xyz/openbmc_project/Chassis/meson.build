_sdbusplus_xyz_openbmc_project_Chassis_Intrusion_md = []
_sdbusplus_xyz_openbmc_project_Chassis_Common_md = []
subdir('Buttons')
subdir('Common')
subdir('Intrusion')
subdir('Control')

custom_target(
  'Intrusion.md',
  output: 'Intrusion.md',
  input: _sdbusplus_xyz_openbmc_project_Chassis_Intrusion_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Chassis/Intrusion.md')

custom_target(
  'Common.md',
  output: 'Common.md',
  input: _sdbusplus_xyz_openbmc_project_Chassis_Common_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Chassis/Common.md')
