generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Certs.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Certs'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Certs.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Certs'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Certs')

subdir('Install')
subdir('Certificate')
subdir('Replace')
subdir('CSR')
