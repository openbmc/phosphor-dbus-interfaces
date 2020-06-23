_sdbusplus_org_open_power_Control_Host_md = []
subdir('TPM')
subdir('Host')

custom_target(
  'Host.md',
  output: 'Host.md',
  input: _sdbusplus_org_open_power_Control_Host_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'org/open_power/Control/Host.md')
