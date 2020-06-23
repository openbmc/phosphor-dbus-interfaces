org_open_power_OCC_PassThrough_md = []
org_open_power_OCC_Status_md = []
subdir('PassThrough')
subdir('Status')

custom_target(
  'PassThrough.md',
  output: 'PassThrough.md',
  input: org_open_power_OCC_PassThrough_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'org/open_power/OCC/PassThrough.md')

custom_target(
  'Status.md',
  output: 'Status.md',
  input: org_open_power_OCC_Status_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'org/open_power/OCC/Status.md')
