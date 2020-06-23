_sdbusplus_xyz_openbmc_project_Control_Security_SpecialMode_md = []
_sdbusplus_xyz_openbmc_project_Control_Security_RestrictionMode_md = []
subdir('RestrictionMode')
subdir('SpecialMode')

custom_target(
  'SpecialMode.md',
  output: 'SpecialMode.md',
  input: _sdbusplus_xyz_openbmc_project_Control_Security_SpecialMode_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Control/Security/SpecialMode.md')

custom_target(
  'RestrictionMode.md',
  output: 'RestrictionMode.md',
  input: _sdbusplus_xyz_openbmc_project_Control_Security_RestrictionMode_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Control/Security/RestrictionMode.md')
