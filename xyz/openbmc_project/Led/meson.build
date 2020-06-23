_sdbusplus_xyz_openbmc_project_Led_Physical_md = []
_sdbusplus_xyz_openbmc_project_Led_Group_md = []
subdir('Group')
subdir('Physical')

custom_target(
  'Physical.md',
  output: 'Physical.md',
  input: _sdbusplus_xyz_openbmc_project_Led_Physical_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Led/Physical.md')

custom_target(
  'Group.md',
  output: 'Group.md',
  input: _sdbusplus_xyz_openbmc_project_Led_Group_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Led/Group.md')
