xyz_openbmc_project_Chassis_Control_NMISource_md = []
xyz_openbmc_project_Chassis_Control_Power_md = []
subdir('Power')
subdir('NMISource')

custom_target(
  'NMISource.md',
  output: 'NMISource.md',
  input: xyz_openbmc_project_Chassis_Control_NMISource_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Chassis/Control/NMISource.md')

custom_target(
  'Power.md',
  output: 'Power.md',
  input: xyz_openbmc_project_Chassis_Control_Power_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Chassis/Control/Power.md')
