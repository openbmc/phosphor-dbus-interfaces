_sdbusplus_xyz_openbmc_project_Logging_ErrorBlocksTransition_md = []
_sdbusplus_xyz_openbmc_project_Logging_Settings_md = []
_sdbusplus_xyz_openbmc_project_Logging_Entry_md = []
_sdbusplus_xyz_openbmc_project_Logging_Event_md = []
_sdbusplus_xyz_openbmc_project_Logging_IPMI_md = []
_sdbusplus_xyz_openbmc_project_Logging_Create_md = []
subdir('Entry')
subdir('Create')
subdir('IPMI')
subdir('Event')
subdir('Settings')
subdir('ErrorBlocksTransition')

custom_target(
  'ErrorBlocksTransition.md',
  output: 'ErrorBlocksTransition.md',
  input: _sdbusplus_xyz_openbmc_project_Logging_ErrorBlocksTransition_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Logging/ErrorBlocksTransition.md')

custom_target(
  'Settings.md',
  output: 'Settings.md',
  input: _sdbusplus_xyz_openbmc_project_Logging_Settings_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Logging/Settings.md')

custom_target(
  'Entry.md',
  output: 'Entry.md',
  input: _sdbusplus_xyz_openbmc_project_Logging_Entry_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Logging/Entry.md')

custom_target(
  'Event.md',
  output: 'Event.md',
  input: _sdbusplus_xyz_openbmc_project_Logging_Event_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Logging/Event.md')

custom_target(
  'IPMI.md',
  output: 'IPMI.md',
  input: _sdbusplus_xyz_openbmc_project_Logging_IPMI_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Logging/IPMI.md')

custom_target(
  'Create.md',
  output: 'Create.md',
  input: _sdbusplus_xyz_openbmc_project_Logging_Create_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Logging/Create.md')
