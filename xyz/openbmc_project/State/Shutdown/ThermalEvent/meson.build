sources_xyz_openbmc_project += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../ThermalEvent.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.State.Shutdown.ThermalEvent'])

sources_xyz_openbmc_project += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../ThermalEvent.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.State.Shutdown.ThermalEvent'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/Shutdown/ThermalEvent')

install_data(
  '../ThermalEvent.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/State/Shutdown')

_sdbusplus_xyz_openbmc_project_State_Shutdown_ThermalEvent_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../ThermalEvent.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'markdown', 'xyz.openbmc_project.State.Shutdown.ThermalEvent'])
