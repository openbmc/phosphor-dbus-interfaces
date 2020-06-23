_sdbusplus_xyz_openbmc_project_VirtualMedia_Legacy_md = []
_sdbusplus_xyz_openbmc_project_VirtualMedia_Stats_md = []
_sdbusplus_xyz_openbmc_project_VirtualMedia_MountPoint_md = []
_sdbusplus_xyz_openbmc_project_VirtualMedia_Proxy_md = []
_sdbusplus_xyz_openbmc_project_VirtualMedia_Process_md = []
subdir('Stats')
subdir('Process')
subdir('MountPoint')
subdir('Legacy')
subdir('Proxy')

custom_target(
  'Legacy.md',
  output: 'Legacy.md',
  input: _sdbusplus_xyz_openbmc_project_VirtualMedia_Legacy_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/VirtualMedia/Legacy.md')

custom_target(
  'Stats.md',
  output: 'Stats.md',
  input: _sdbusplus_xyz_openbmc_project_VirtualMedia_Stats_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/VirtualMedia/Stats.md')

custom_target(
  'MountPoint.md',
  output: 'MountPoint.md',
  input: _sdbusplus_xyz_openbmc_project_VirtualMedia_MountPoint_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/VirtualMedia/MountPoint.md')

custom_target(
  'Proxy.md',
  output: 'Proxy.md',
  input: _sdbusplus_xyz_openbmc_project_VirtualMedia_Proxy_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/VirtualMedia/Proxy.md')

custom_target(
  'Process.md',
  output: 'Process.md',
  input: _sdbusplus_xyz_openbmc_project_VirtualMedia_Process_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/VirtualMedia/Process.md')
