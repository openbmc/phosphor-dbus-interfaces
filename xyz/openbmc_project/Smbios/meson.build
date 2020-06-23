_sdbusplus_xyz_openbmc_project_Smbios_MDR_V2_md = []
subdir('MDR_V2')

custom_target(
  'MDR_V2.md',
  output: 'MDR_V2.md',
  input: _sdbusplus_xyz_openbmc_project_Smbios_MDR_V2_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Smbios/MDR_V2.md')
