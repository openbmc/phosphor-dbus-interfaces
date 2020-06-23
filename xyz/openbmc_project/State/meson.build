_sdbusplus_xyz_openbmc_project_State_SystemdTarget_md = []
_sdbusplus_xyz_openbmc_project_State_Drive_md = []
_sdbusplus_xyz_openbmc_project_State_Chassis_md = []
_sdbusplus_xyz_openbmc_project_State_ScheduledHostTransition_md = []
_sdbusplus_xyz_openbmc_project_State_PowerOnHours_md = []
_sdbusplus_xyz_openbmc_project_State_Watchdog_md = []
_sdbusplus_xyz_openbmc_project_State_BMC_md = []
_sdbusplus_xyz_openbmc_project_State_Host_md = []
subdir('Decorator')
subdir('ScheduledHostTransition')
subdir('BMC')
subdir('PowerOnHours')
subdir('SystemdTarget')
subdir('Boot')
subdir('Shutdown')
subdir('Host')
subdir('Watchdog')
subdir('OperatingSystem')
subdir('Chassis')
subdir('Drive')

custom_target(
  'SystemdTarget.md',
  output: 'SystemdTarget.md',
  input: _sdbusplus_xyz_openbmc_project_State_SystemdTarget_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/SystemdTarget.md')

custom_target(
  'Drive.md',
  output: 'Drive.md',
  input: _sdbusplus_xyz_openbmc_project_State_Drive_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/Drive.md')

custom_target(
  'Chassis.md',
  output: 'Chassis.md',
  input: _sdbusplus_xyz_openbmc_project_State_Chassis_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/Chassis.md')

custom_target(
  'ScheduledHostTransition.md',
  output: 'ScheduledHostTransition.md',
  input: _sdbusplus_xyz_openbmc_project_State_ScheduledHostTransition_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/ScheduledHostTransition.md')

custom_target(
  'PowerOnHours.md',
  output: 'PowerOnHours.md',
  input: _sdbusplus_xyz_openbmc_project_State_PowerOnHours_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/PowerOnHours.md')

custom_target(
  'Watchdog.md',
  output: 'Watchdog.md',
  input: _sdbusplus_xyz_openbmc_project_State_Watchdog_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/Watchdog.md')

custom_target(
  'BMC.md',
  output: 'BMC.md',
  input: _sdbusplus_xyz_openbmc_project_State_BMC_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/BMC.md')

custom_target(
  'Host.md',
  output: 'Host.md',
  input: _sdbusplus_xyz_openbmc_project_State_Host_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/State/Host.md')
