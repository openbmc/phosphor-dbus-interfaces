org_open_power_Host_md = []
subdir('Host')
subdir('Common')
subdir('Logging')
subdir('OCC')
subdir('Proc')
subdir('Control')
subdir('Inventory')
subdir('Sensor')

custom_target(
  'Host.md',
  output: 'Host.md',
  input: org_open_power_Host_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'org/open_power/Host.md')
