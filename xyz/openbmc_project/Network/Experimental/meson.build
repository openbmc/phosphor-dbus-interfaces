_sdbusplus_xyz_openbmc_project_Network_Experimental_Bond_md = []
_sdbusplus_xyz_openbmc_project_Network_Experimental_Tunnel_md = []
subdir('Tunnel')
subdir('Bond')

custom_target(
  'Bond.md',
  output: 'Bond.md',
  input: _sdbusplus_xyz_openbmc_project_Network_Experimental_Bond_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Network/Experimental/Bond.md')

custom_target(
  'Tunnel.md',
  output: 'Tunnel.md',
  input: _sdbusplus_xyz_openbmc_project_Network_Experimental_Tunnel_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Network/Experimental/Tunnel.md')
