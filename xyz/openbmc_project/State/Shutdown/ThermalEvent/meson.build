generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../ThermalEvent.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.State.Shutdown.ThermalEvent'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../ThermalEvent.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.State.Shutdown.ThermalEvent'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/Shutdown/ThermalEvent')

