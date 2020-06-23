generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../BMC.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.State.BMC'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../BMC.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.State.BMC'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/BMC')

install_data(
  '../BMC.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/State')

xyz_openbmc_project_State_BMC_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../BMC.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'markdown', 'xyz.openbmc_project.State.BMC'])
generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../BMC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.State.BMC'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../BMC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.State.BMC'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/BMC')

install_data(
  '../BMC.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/State')

xyz_openbmc_project_State_BMC_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../BMC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.State.BMC'])

