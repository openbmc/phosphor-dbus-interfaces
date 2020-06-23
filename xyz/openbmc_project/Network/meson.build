_sdbusplus_xyz_openbmc_project_Network_EthernetInterface_md = []
_sdbusplus_xyz_openbmc_project_Network_SystemConfiguration_md = []
_sdbusplus_xyz_openbmc_project_Network_VLAN_md = []
_sdbusplus_xyz_openbmc_project_Network_Neighbor_md = []
_sdbusplus_xyz_openbmc_project_Network_IP_md = []
_sdbusplus_xyz_openbmc_project_Network_DHCPConfiguration_md = []
_sdbusplus_xyz_openbmc_project_Network_MACAddress_md = []
_sdbusplus_xyz_openbmc_project_Network_Client_md = []
subdir('Experimental')
subdir('EthernetInterface')
subdir('VLAN')
subdir('Client')
subdir('IP')
subdir('MACAddress')
subdir('DHCPConfiguration')
subdir('SystemConfiguration')
subdir('Neighbor')

custom_target(
  'EthernetInterface.md',
  output: 'EthernetInterface.md',
  input: _sdbusplus_xyz_openbmc_project_Network_EthernetInterface_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Network/EthernetInterface.md')

custom_target(
  'SystemConfiguration.md',
  output: 'SystemConfiguration.md',
  input: _sdbusplus_xyz_openbmc_project_Network_SystemConfiguration_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Network/SystemConfiguration.md')

custom_target(
  'VLAN.md',
  output: 'VLAN.md',
  input: _sdbusplus_xyz_openbmc_project_Network_VLAN_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Network/VLAN.md')

custom_target(
  'Neighbor.md',
  output: 'Neighbor.md',
  input: _sdbusplus_xyz_openbmc_project_Network_Neighbor_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Network/Neighbor.md')

custom_target(
  'IP.md',
  output: 'IP.md',
  input: _sdbusplus_xyz_openbmc_project_Network_IP_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Network/IP.md')

custom_target(
  'DHCPConfiguration.md',
  output: 'DHCPConfiguration.md',
  input: _sdbusplus_xyz_openbmc_project_Network_DHCPConfiguration_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Network/DHCPConfiguration.md')

custom_target(
  'MACAddress.md',
  output: 'MACAddress.md',
  input: _sdbusplus_xyz_openbmc_project_Network_MACAddress_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Network/MACAddress.md')

custom_target(
  'Client.md',
  output: 'Client.md',
  input: _sdbusplus_xyz_openbmc_project_Network_Client_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Network/Client.md')
