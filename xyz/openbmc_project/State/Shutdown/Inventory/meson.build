generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Inventory.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.State.Shutdown.Inventory'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Inventory.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.State.Shutdown.Inventory'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/Shutdown/Inventory')

install_data(
  '../Inventory.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/State/Shutdown')

