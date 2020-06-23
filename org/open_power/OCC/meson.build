_sdbusplus_org_open_power_OCC_PassThrough_md = []
_sdbusplus_org_open_power_OCC_Status_md = []
subdir('PassThrough')
subdir('Status')

custom_target(
  'PassThrough.md',
  output: 'PassThrough.md',
  input: _sdbusplus_org_open_power_OCC_PassThrough_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'org/open_power/OCC/PassThrough.md')

custom_target(
  'Status.md',
  output: 'Status.md',
  input: _sdbusplus_org_open_power_OCC_Status_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'org/open_power/OCC/Status.md')
