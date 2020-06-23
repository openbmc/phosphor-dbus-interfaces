_sdbusplus_xyz_openbmc_project_Control_Power_ACPIPowerState_md = []
_sdbusplus_xyz_openbmc_project_Control_Power_Cap_md = []
_sdbusplus_xyz_openbmc_project_Control_Power_RestorePolicy_md = []
subdir('RestorePolicy')
subdir('Cap')
subdir('ACPIPowerState')

custom_target(
  'ACPIPowerState.md',
  output: 'ACPIPowerState.md',
  input: _sdbusplus_xyz_openbmc_project_Control_Power_ACPIPowerState_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Control/Power/ACPIPowerState.md')

custom_target(
  'Cap.md',
  output: 'Cap.md',
  input: _sdbusplus_xyz_openbmc_project_Control_Power_Cap_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Control/Power/Cap.md')

custom_target(
  'RestorePolicy.md',
  output: 'RestorePolicy.md',
  input: _sdbusplus_xyz_openbmc_project_Control_Power_RestorePolicy_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Control/Power/RestorePolicy.md')
