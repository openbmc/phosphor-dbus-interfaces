generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../FanPwm.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Control.FanPwm'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../FanPwm.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Control.FanPwm'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Control/FanPwm')

install_data(
  '../FanPwm.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Control')

xyz_openbmc_project_Control_FanPwm_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../FanPwm.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Control.FanPwm'])

