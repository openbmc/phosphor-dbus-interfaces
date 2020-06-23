generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../File.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Common.File'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../File.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Common.File'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Common/File')

