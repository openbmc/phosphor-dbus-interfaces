generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../SystemdTarget.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.State.SystemdTarget'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../SystemdTarget.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.State.SystemdTarget'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/State/SystemdTarget')

