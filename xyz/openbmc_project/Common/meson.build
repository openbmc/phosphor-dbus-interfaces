sources_xyz_openbmc_project += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Common.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Common'])

sources_xyz_openbmc_project += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Common.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Common'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Common')

install_data(
  '../Common.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project')

_sdbusplus_xyz_openbmc_project_Common_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../Common.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'markdown', 'xyz.openbmc_project.Common'])
_sdbusplus_xyz_openbmc_project_Common_FactoryReset_md = []
_sdbusplus_xyz_openbmc_project_Common_FilePath_md = []
_sdbusplus_xyz_openbmc_project_Common_File_md = []
_sdbusplus_xyz_openbmc_project_Common_TFTP_md = []
_sdbusplus_xyz_openbmc_project_Common_Callout_md = []
_sdbusplus_xyz_openbmc_project_Common_Device_md = []
_sdbusplus_xyz_openbmc_project_Common_UUID_md = []
_sdbusplus_xyz_openbmc_project_Common_ObjectPath_md = []
subdir('UUID')
subdir('FactoryReset')
subdir('Device')
subdir('File')
subdir('TFTP')
subdir('ObjectPath')
subdir('Callout')
subdir('FilePath')

custom_target(
  'FactoryReset.md',
  output: 'FactoryReset.md',
  input: _sdbusplus_xyz_openbmc_project_Common_FactoryReset_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Common/FactoryReset.md')

custom_target(
  'FilePath.md',
  output: 'FilePath.md',
  input: _sdbusplus_xyz_openbmc_project_Common_FilePath_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Common/FilePath.md')

custom_target(
  'File.md',
  output: 'File.md',
  input: _sdbusplus_xyz_openbmc_project_Common_File_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Common/File.md')

custom_target(
  'TFTP.md',
  output: 'TFTP.md',
  input: _sdbusplus_xyz_openbmc_project_Common_TFTP_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Common/TFTP.md')

custom_target(
  'Callout.md',
  output: 'Callout.md',
  input: _sdbusplus_xyz_openbmc_project_Common_Callout_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Common/Callout.md')

custom_target(
  'Device.md',
  output: 'Device.md',
  input: _sdbusplus_xyz_openbmc_project_Common_Device_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Common/Device.md')

custom_target(
  'UUID.md',
  output: 'UUID.md',
  input: _sdbusplus_xyz_openbmc_project_Common_UUID_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Common/UUID.md')

custom_target(
  'ObjectPath.md',
  output: 'ObjectPath.md',
  input: _sdbusplus_xyz_openbmc_project_Common_ObjectPath_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Common/ObjectPath.md')
