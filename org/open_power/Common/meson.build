_sdbusplus_org_open_power_Common_Callout_md = []
subdir('Callout')

custom_target(
  'Callout.md',
  output: 'Callout.md',
  input: _sdbusplus_org_open_power_Common_Callout_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'org/open_power/Common/Callout.md')
