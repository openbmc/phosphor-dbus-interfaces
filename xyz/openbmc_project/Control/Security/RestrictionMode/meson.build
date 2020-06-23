generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../RestrictionMode.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.Security.RestrictionMode'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../RestrictionMode.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.Security.RestrictionMode'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/Security/RestrictionMode')

