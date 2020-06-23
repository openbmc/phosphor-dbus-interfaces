generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Delete.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Object.Delete'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Delete.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Object.Delete'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Object/Delete')

install_data(
  '../Delete.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Object')

xyz_openbmc_project_Object_Delete_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Delete.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Object.Delete'])

