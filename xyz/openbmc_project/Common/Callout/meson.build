sources_xyz_openbmc_project += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Callout.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Common.Callout'])

sources_xyz_openbmc_project += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Callout.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Common.Callout'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Common/Callout')

install_data(
  '../Callout.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Common')

_sdbusplus_xyz_openbmc_project_Common_Callout_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../Callout.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'markdown', 'xyz.openbmc_project.Common.Callout'])
