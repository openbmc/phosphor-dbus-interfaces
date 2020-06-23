sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Entity.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Inventory.Source.PLDM.Entity'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Entity.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Inventory.Source.PLDM.Entity'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory/Source/PLDM/Entity')

install_data(
  '../Entity.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Inventory/Source/PLDM')

_sdbusplus_xyz_openbmc_project_Inventory_Source_PLDM_Entity_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Entity.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Inventory.Source.PLDM.Entity'])

