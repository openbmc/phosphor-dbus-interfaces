_sdbusplus_xyz_openbmc_project_User_Ldap_Config_md = []
_sdbusplus_xyz_openbmc_project_User_Ldap_Create_md = []
subdir('Create')
subdir('Config')

custom_target(
  'Config.md',
  output: 'Config.md',
  input: _sdbusplus_xyz_openbmc_project_User_Ldap_Config_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/User/Ldap/Config.md')

custom_target(
  'Create.md',
  output: 'Create.md',
  input: _sdbusplus_xyz_openbmc_project_User_Ldap_Create_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/User/Ldap/Create.md')
