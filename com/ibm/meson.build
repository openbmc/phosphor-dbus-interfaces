sources_com_ibm = []
_sdbusplus_com_ibm_VPD_md = []
subdir('ipzvpd')
subdir('VPD')
subdir('Logging')

custom_target(
  'VPD.md',
  output: 'VPD.md',
  input: _sdbusplus_com_ibm_VPD_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'com/ibm/VPD.md')
