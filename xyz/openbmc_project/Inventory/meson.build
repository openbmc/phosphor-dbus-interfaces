generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Inventory.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Inventory'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Inventory.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Inventory'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Inventory')

subdir('Item')
subdir('Manager')
subdir('Decorator')
subdir('Source')
