xyz_openbmc_project_Object_Enable_md = []
xyz_openbmc_project_Object_Delete_md = []
subdir('Enable')
subdir('Delete')

custom_target(
  'Enable.md',
  output: 'Enable.md',
  input: xyz_openbmc_project_Object_Enable_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Object/Enable.md')

custom_target(
  'Delete.md',
  output: 'Delete.md',
  input: xyz_openbmc_project_Object_Delete_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Object/Delete.md')
