xyz_openbmc_project_Control_Boot_Source_md = []
xyz_openbmc_project_Control_Boot_Mode_md = []
xyz_openbmc_project_Control_Boot_RebootAttempts_md = []
xyz_openbmc_project_Control_Boot_RebootPolicy_md = []
subdir('Source')
subdir('RebootAttempts')
subdir('RebootPolicy')
subdir('Mode')

custom_target(
  'Source.md',
  output: 'Source.md',
  input: xyz_openbmc_project_Control_Boot_Source_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Control/Boot/Source.md')

custom_target(
  'Mode.md',
  output: 'Mode.md',
  input: xyz_openbmc_project_Control_Boot_Mode_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Control/Boot/Mode.md')

custom_target(
  'RebootAttempts.md',
  output: 'RebootAttempts.md',
  input: xyz_openbmc_project_Control_Boot_RebootAttempts_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Control/Boot/RebootAttempts.md')

custom_target(
  'RebootPolicy.md',
  output: 'RebootPolicy.md',
  input: xyz_openbmc_project_Control_Boot_RebootPolicy_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Control/Boot/RebootPolicy.md')
