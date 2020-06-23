generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../Version.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Software.Version'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../Version.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Software.Version'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Software/Version')

install_data(
  '../Version.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Software')

generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Version.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Software.Version'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Version.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Software.Version'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Software/Version')

install_data(
  '../Version.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Software')

