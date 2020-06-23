_sdbusplus_xyz_openbmc_project_Dump_Entry_md = []
_sdbusplus_xyz_openbmc_project_Dump_NewDump_md = []
_sdbusplus_xyz_openbmc_project_Dump_Create_md = []
subdir('Entry')
subdir('Create')
subdir('NewDump')

custom_target(
  'Entry.md',
  output: 'Entry.md',
  input: _sdbusplus_xyz_openbmc_project_Dump_Entry_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Dump/Entry.md')

custom_target(
  'NewDump.md',
  output: 'NewDump.md',
  input: _sdbusplus_xyz_openbmc_project_Dump_NewDump_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Dump/NewDump.md')

custom_target(
  'Create.md',
  output: 'Create.md',
  input: _sdbusplus_xyz_openbmc_project_Dump_Create_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Dump/Create.md')
