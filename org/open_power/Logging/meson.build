_sdbusplus_org_open_power_Logging_PEL_md = []
subdir('PEL')

custom_target(
  'PEL.md',
  output: 'PEL.md',
  input: _sdbusplus_org_open_power_Logging_PEL_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'org/open_power/Logging/PEL.md')
