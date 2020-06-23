generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../ActivationBlocksTransition.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Software.ActivationBlocksTransition'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../ActivationBlocksTransition.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Software.ActivationBlocksTransition'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Software/ActivationBlocksTransition')

install_data(
  '../ActivationBlocksTransition.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Software')

xyz_openbmc_project_Software_ActivationBlocksTransition_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../ActivationBlocksTransition.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Software.ActivationBlocksTransition'])

