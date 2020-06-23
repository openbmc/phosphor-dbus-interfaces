_sdbusplus_xyz_openbmc_project_Nvme_Status_md = []
subdir('Status')

custom_target(
  'Status.md',
  output: 'Status.md',
  input: _sdbusplus_xyz_openbmc_project_Nvme_Status_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Nvme/Status.md')
