_sdbusplus_xyz_openbmc_project_PFR_Attributes_md = []
subdir('Attributes')

custom_target(
  'Attributes.md',
  output: 'Attributes.md',
  input: _sdbusplus_xyz_openbmc_project_PFR_Attributes_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/PFR/Attributes.md')
