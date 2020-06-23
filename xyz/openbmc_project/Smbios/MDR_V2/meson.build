generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../MDR_V2.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Smbios.MDR_V2'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../MDR_V2.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Smbios.MDR_V2'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Smbios/MDR_V2')

install_data(
  '../MDR_V2.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Smbios')

generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../MDR_V2.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Smbios.MDR_V2'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../MDR_V2.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Smbios.MDR_V2'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Smbios/MDR_V2')

install_data(
  '../MDR_V2.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Smbios')

