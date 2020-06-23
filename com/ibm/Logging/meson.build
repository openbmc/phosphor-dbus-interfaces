_sdbusplus_com_ibm_Logging_Policy_md = []
subdir('Policy')

custom_target(
  'Policy.md',
  output: 'Policy.md',
  input: _sdbusplus_com_ibm_Logging_Policy_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'com/ibm/Logging/Policy.md')
