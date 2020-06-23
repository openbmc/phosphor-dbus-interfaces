_sdbusplus_xyz_openbmc_project_Control_Service_Attributes_md = []
_sdbusplus_xyz_openbmc_project_Control_Service_SocketAttributes_md = []
subdir('Attributes')
subdir('SocketAttributes')

custom_target(
  'Attributes.md',
  output: 'Attributes.md',
  input: _sdbusplus_xyz_openbmc_project_Control_Service_Attributes_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Control/Service/Attributes.md')

custom_target(
  'SocketAttributes.md',
  output: 'SocketAttributes.md',
  input: _sdbusplus_xyz_openbmc_project_Control_Service_SocketAttributes_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Control/Service/SocketAttributes.md')
