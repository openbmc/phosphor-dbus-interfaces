sources_xyz_openbmc_project = []
_sdbusplus_xyz_openbmc_project_Association_md = []
_sdbusplus_xyz_openbmc_project_Common_md = []
_sdbusplus_xyz_openbmc_project_Time_md = []
_sdbusplus_xyz_openbmc_project_Inventory_md = []
_sdbusplus_xyz_openbmc_project_ObjectMapper_md = []
_sdbusplus_xyz_openbmc_project_ScheduledTime_md = []
_sdbusplus_xyz_openbmc_project_Certs_md = []
subdir('Logging')
subdir('PLDM')
subdir('Smbios')
subdir('Object')
subdir('Common')
subdir('Dump')
subdir('Association')
subdir('VirtualMedia')
subdir('State')
subdir('Software')
subdir('PFR')
subdir('Ipmi')
subdir('ScheduledTime')
subdir('Led')
subdir('Sensor')
subdir('Chassis')
subdir('Time')
subdir('Control')
subdir('Certs')
subdir('ObjectMapper')
subdir('Collection')
subdir('User')
subdir('Inventory')
subdir('Nvme')
subdir('Network')
subdir('Memory')
subdir('Channel')

custom_target(
  'Association.md',
  output: 'Association.md',
  input: _sdbusplus_xyz_openbmc_project_Association_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Association.md')

custom_target(
  'Common.md',
  output: 'Common.md',
  input: _sdbusplus_xyz_openbmc_project_Common_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Common.md')

custom_target(
  'Time.md',
  output: 'Time.md',
  input: _sdbusplus_xyz_openbmc_project_Time_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Time.md')

custom_target(
  'Inventory.md',
  output: 'Inventory.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory.md')

custom_target(
  'ObjectMapper.md',
  output: 'ObjectMapper.md',
  input: _sdbusplus_xyz_openbmc_project_ObjectMapper_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/ObjectMapper.md')

custom_target(
  'ScheduledTime.md',
  output: 'ScheduledTime.md',
  input: _sdbusplus_xyz_openbmc_project_ScheduledTime_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/ScheduledTime.md')

custom_target(
  'Certs.md',
  output: 'Certs.md',
  input: _sdbusplus_xyz_openbmc_project_Certs_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Certs.md')
