sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../PowerSupplyRedundancy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.PowerSupplyRedundancy'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../PowerSupplyRedundancy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.PowerSupplyRedundancy'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/PowerSupplyRedundancy')

install_data(
  '../PowerSupplyRedundancy.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control')

_sdbusplus_xyz_openbmc_project_Control_PowerSupplyRedundancy_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../PowerSupplyRedundancy.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Control.PowerSupplyRedundancy'])

