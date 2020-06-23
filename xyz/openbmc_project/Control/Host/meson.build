sources_xyz_openbmc_project += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Host.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Control.Host'])

sources_xyz_openbmc_project += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Host.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Control.Host'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/Host')

install_data(
  '../Host.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control')

_sdbusplus_xyz_openbmc_project_Control_Host_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../Host.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'markdown', 'xyz.openbmc_project.Control.Host'])
sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Host.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.Host'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Host.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.Host'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/Host')

install_data(
  '../Host.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control')

_sdbusplus_xyz_openbmc_project_Control_Host_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Host.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Control.Host'])

_sdbusplus_xyz_openbmc_project_Control_Host_NMI_md = []
_sdbusplus_xyz_openbmc_project_Control_Host_TurboAllowed_md = []
subdir('TurboAllowed')
subdir('NMI')

custom_target(
  'NMI.md',
  output: 'NMI.md',
  input: _sdbusplus_xyz_openbmc_project_Control_Host_NMI_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Control/Host/NMI.md')

custom_target(
  'TurboAllowed.md',
  output: 'TurboAllowed.md',
  input: _sdbusplus_xyz_openbmc_project_Control_Host_TurboAllowed_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Control/Host/TurboAllowed.md')
