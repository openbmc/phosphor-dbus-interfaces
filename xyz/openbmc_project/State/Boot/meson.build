xyz_openbmc_project_State_Boot_PostCode_md = []
xyz_openbmc_project_State_Boot_Progress_md = []
xyz_openbmc_project_State_Boot_Raw_md = []
subdir('PostCode')
subdir('Progress')
subdir('Raw')

custom_target(
  'PostCode.md',
  output: 'PostCode.md',
  input: xyz_openbmc_project_State_Boot_PostCode_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/Boot/PostCode.md')

custom_target(
  'Progress.md',
  output: 'Progress.md',
  input: xyz_openbmc_project_State_Boot_Progress_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/Boot/Progress.md')

custom_target(
  'Raw.md',
  output: 'Raw.md',
  input: xyz_openbmc_project_State_Boot_Raw_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/Boot/Raw.md')
