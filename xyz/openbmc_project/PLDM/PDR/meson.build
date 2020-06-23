sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../PDR.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.PLDM.PDR'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../PDR.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.PLDM.PDR'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/PLDM/PDR')

install_data(
  '../PDR.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/PLDM')

_sdbusplus_xyz_openbmc_project_PLDM_PDR_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../PDR.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.PLDM.PDR'])

