generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Common.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Common'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Common.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Common'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Common')

subdir('UUID')
subdir('FactoryReset')
subdir('Device')
subdir('File')
subdir('TFTP')
subdir('ObjectPath')
subdir('Callout')
subdir('FilePath')
