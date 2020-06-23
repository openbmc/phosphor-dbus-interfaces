_sdbusplus_xyz_openbmc_project_Object_Enable_md = []
_sdbusplus_xyz_openbmc_project_Object_Delete_md = []
subdir('Enable')
subdir('Delete')

custom_target(
  'Enable.md',
  output: 'Enable.md',
  input: _sdbusplus_xyz_openbmc_project_Object_Enable_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Object/Enable.md')

custom_target(
  'Delete.md',
  output: 'Delete.md',
  input: _sdbusplus_xyz_openbmc_project_Object_Delete_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Object/Delete.md')
