_sdbusplus_org_open_power_Proc_FSI_md = []
subdir('FSI')

custom_target(
  'FSI.md',
  output: 'FSI.md',
  input: _sdbusplus_org_open_power_Proc_FSI_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'org/open_power/Proc/FSI.md')
