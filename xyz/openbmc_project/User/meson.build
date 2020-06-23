xyz_openbmc_project_User_Manager_md = []
xyz_openbmc_project_User_PrivilegeMapper_md = []
xyz_openbmc_project_User_PrivilegeMapperEntry_md = []
xyz_openbmc_project_User_Common_md = []
xyz_openbmc_project_User_AccountPolicy_md = []
xyz_openbmc_project_User_Attributes_md = []
subdir('Manager')
subdir('PrivilegeMapperEntry')
subdir('Common')
subdir('PrivilegeMapper')
subdir('AccountPolicy')
subdir('Attributes')
subdir('Ldap')

custom_target(
  'Manager.md',
  output: 'Manager.md',
  input: xyz_openbmc_project_User_Manager_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/User/Manager.md')

custom_target(
  'PrivilegeMapper.md',
  output: 'PrivilegeMapper.md',
  input: xyz_openbmc_project_User_PrivilegeMapper_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/User/PrivilegeMapper.md')

custom_target(
  'PrivilegeMapperEntry.md',
  output: 'PrivilegeMapperEntry.md',
  input: xyz_openbmc_project_User_PrivilegeMapperEntry_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/User/PrivilegeMapperEntry.md')

custom_target(
  'Common.md',
  output: 'Common.md',
  input: xyz_openbmc_project_User_Common_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/User/Common.md')

custom_target(
  'AccountPolicy.md',
  output: 'AccountPolicy.md',
  input: xyz_openbmc_project_User_AccountPolicy_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/User/AccountPolicy.md')

custom_target(
  'Attributes.md',
  output: 'Attributes.md',
  input: xyz_openbmc_project_User_Attributes_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/User/Attributes.md')
