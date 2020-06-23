sources_com_ibm += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../VPD.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'exception-cpp', 'com.ibm.VPD'])

sources_com_ibm += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../VPD.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'exception-header', 'com.ibm.VPD'],
  install: true,
  install_dir: get_option('includedir') / 'com/ibm/VPD')

install_data(
  '../VPD.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/com/ibm')

_sdbusplus_com_ibm_VPD_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../VPD.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'markdown', 'com.ibm.VPD'])
_sdbusplus_com_ibm_VPD_Manager_md = []
subdir('Manager')

custom_target(
  'Manager.md',
  output: 'Manager.md',
  input: _sdbusplus_com_ibm_VPD_Manager_md,
  capture: true,
  command: [cat_prog, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'com/ibm/VPD/Manager.md')
