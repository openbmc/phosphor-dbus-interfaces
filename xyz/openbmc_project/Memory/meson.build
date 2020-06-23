_sdbusplus_xyz_openbmc_project_Memory_MemoryECC_md = []
subdir('MemoryECC')

custom_target(
  'MemoryECC.md',
  output: 'MemoryECC.md',
  input: _sdbusplus_xyz_openbmc_project_Memory_MemoryECC_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Memory/MemoryECC.md')
