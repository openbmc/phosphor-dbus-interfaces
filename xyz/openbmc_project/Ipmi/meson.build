_sdbusplus_xyz_openbmc_project_Ipmi_SOL_md = []
_sdbusplus_xyz_openbmc_project_Ipmi_SessionInfo_md = []
subdir('SessionInfo')
subdir('SOL')

custom_target(
  'SOL.md',
  output: 'SOL.md',
  input: _sdbusplus_xyz_openbmc_project_Ipmi_SOL_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Ipmi/SOL.md')

custom_target(
  'SessionInfo.md',
  output: 'SessionInfo.md',
  input: _sdbusplus_xyz_openbmc_project_Ipmi_SessionInfo_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Ipmi/SessionInfo.md')
