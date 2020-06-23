_sdbusplus_xyz_openbmc_project_Collection_DeleteAll_md = []
subdir('DeleteAll')

custom_target(
  'DeleteAll.md',
  output: 'DeleteAll.md',
  input: _sdbusplus_xyz_openbmc_project_Collection_DeleteAll_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Collection/DeleteAll.md')
