sources_xyz_openbmc_project += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Status.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Nvme.Status'])

sources_xyz_openbmc_project += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Status.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Nvme.Status'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Nvme/Status')

install_data(
  '../Status.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Nvme')

_sdbusplus_xyz_openbmc_project_Nvme_Status_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../Status.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'error', 'markdown', 'xyz.openbmc_project.Nvme.Status'])
sources_xyz_openbmc_project += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Status.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Nvme.Status'])

sources_xyz_openbmc_project += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Status.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Nvme.Status'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Nvme/Status')

install_data(
  '../Status.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Nvme')

_sdbusplus_xyz_openbmc_project_Nvme_Status_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Status.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Nvme.Status'])

