_sdbusplus_xyz_openbmc_project_Inventory_Source_PLDM_FRU_md = []
_sdbusplus_xyz_openbmc_project_Inventory_Source_PLDM_Entity_md = []
subdir('FRU')
subdir('Entity')

custom_target(
  'FRU.md',
  output: 'FRU.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Source_PLDM_FRU_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Source/PLDM/FRU.md')

custom_target(
  'Entity.md',
  output: 'Entity.md',
  input: _sdbusplus_xyz_openbmc_project_Inventory_Source_PLDM_Entity_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Inventory/Source/PLDM/Entity.md')
