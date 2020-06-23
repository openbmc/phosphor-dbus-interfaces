_sdbusplus_xyz_openbmc_project_PLDM_Requester_md = []
_sdbusplus_xyz_openbmc_project_PLDM_PDR_md = []
subdir('Requester')
subdir('PDR')

custom_target(
  'Requester.md',
  output: 'Requester.md',
  input: _sdbusplus_xyz_openbmc_project_PLDM_Requester_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/PLDM/Requester.md')

custom_target(
  'PDR.md',
  output: 'PDR.md',
  input: _sdbusplus_xyz_openbmc_project_PLDM_PDR_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/PLDM/PDR.md')
