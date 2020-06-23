sources_xyz_openbmc_project += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../ScheduledTime.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.ScheduledTime'])

sources_xyz_openbmc_project += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../ScheduledTime.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.ScheduledTime'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/ScheduledTime')

install_data(
  '../ScheduledTime.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project')

_sdbusplus_xyz_openbmc_project_ScheduledTime_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../ScheduledTime.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'markdown', 'xyz.openbmc_project.ScheduledTime'])
