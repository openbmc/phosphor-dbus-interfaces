generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../Entry.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Dump.Entry'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../Entry.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Dump.Entry'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Dump/Entry')

install_data(
  '../Entry.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Dump')

xyz_openbmc_project_Dump_Entry_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../Entry.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Dump.Entry'])

xyz_openbmc_project_Dump_Entry_BMC_md = []
xyz_openbmc_project_Dump_Entry_System_md = []
subdir('BMC')
subdir('System')

custom_target(
  'BMC.md',
  output: 'BMC.md',
  input: xyz_openbmc_project_Dump_Entry_BMC_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Dump/Entry/BMC.md')

custom_target(
  'System.md',
  output: 'System.md',
  input: xyz_openbmc_project_Dump_Entry_System_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Dump/Entry/System.md')
