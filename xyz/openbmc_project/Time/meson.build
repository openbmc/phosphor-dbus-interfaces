sources_xyz_openbmc_project += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Time.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Time'])

sources_xyz_openbmc_project += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Time.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Time'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Time')

install_data(
  '../Time.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project')

_sdbusplus_xyz_openbmc_project_Time_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../Time.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'markdown', 'xyz.openbmc_project.Time'])
_sdbusplus_xyz_openbmc_project_Time_Synchronization_md = []
_sdbusplus_xyz_openbmc_project_Time_EpochTime_md = []
subdir('Synchronization')
subdir('EpochTime')

custom_target(
  'Synchronization.md',
  output: 'Synchronization.md',
  input: _sdbusplus_xyz_openbmc_project_Time_Synchronization_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Time/Synchronization.md')

custom_target(
  'EpochTime.md',
  output: 'EpochTime.md',
  input: _sdbusplus_xyz_openbmc_project_Time_EpochTime_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Time/EpochTime.md')
