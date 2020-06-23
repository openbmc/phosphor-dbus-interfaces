sources_xyz_openbmc_project += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Device.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Control.Device'])

sources_xyz_openbmc_project += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Device.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Control.Device'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/Device')

install_data(
  '../Device.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control')

_sdbusplus_xyz_openbmc_project_Control_Device_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../Device.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'markdown', 'xyz.openbmc_project.Control.Device'])
