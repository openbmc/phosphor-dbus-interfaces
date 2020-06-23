_sdbusplus_xyz_openbmc_project_Channel_ChannelAccess_md = []
subdir('ChannelAccess')

custom_target(
  'ChannelAccess.md',
  output: 'ChannelAccess.md',
  input: _sdbusplus_xyz_openbmc_project_Channel_ChannelAccess_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Channel/ChannelAccess.md')
