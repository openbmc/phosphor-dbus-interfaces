_sdbusplus_org_open_power_Control_TPM_SecurityKeys_md = []
subdir('SecurityKeys')

custom_target(
  'SecurityKeys.md',
  output: 'SecurityKeys.md',
  input: _sdbusplus_org_open_power_Control_TPM_SecurityKeys_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'org/open_power/Control/TPM/SecurityKeys.md')
