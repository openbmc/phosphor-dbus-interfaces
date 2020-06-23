_sdbusplus_xyz_openbmc_project_State_Decorator_Availability_md = []
_sdbusplus_xyz_openbmc_project_State_Decorator_OperationalStatus_md = []
subdir('Availability')
subdir('OperationalStatus')

custom_target(
  'Availability.md',
  output: 'Availability.md',
  input: _sdbusplus_xyz_openbmc_project_State_Decorator_Availability_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/Decorator/Availability.md')

custom_target(
  'OperationalStatus.md',
  output: 'OperationalStatus.md',
  input: _sdbusplus_xyz_openbmc_project_State_Decorator_OperationalStatus_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/Decorator/OperationalStatus.md')
