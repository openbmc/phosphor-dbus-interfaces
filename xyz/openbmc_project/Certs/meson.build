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

install_data(
  '../Certs.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project')

xyz_openbmc_project_Certs_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../Certs.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'markdown', 'xyz.openbmc_project.Certs'])
xyz_openbmc_project_Certs_Certificate_md = []
xyz_openbmc_project_Certs_Install_md = []
xyz_openbmc_project_Certs_Replace_md = []
xyz_openbmc_project_Certs_CSR_md = []
subdir('Install')
subdir('Certificate')
subdir('Replace')
subdir('CSR')

custom_target(
  'Certificate.md',
  output: 'Certificate.md',
  input: xyz_openbmc_project_Certs_Certificate_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Certs/Certificate.md')

custom_target(
  'Install.md',
  output: 'Install.md',
  input: xyz_openbmc_project_Certs_Install_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Certs/Install.md')

custom_target(
  'Replace.md',
  output: 'Replace.md',
  input: xyz_openbmc_project_Certs_Replace_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Certs/Replace.md')

custom_target(
  'CSR.md',
  output: 'CSR.md',
  input: xyz_openbmc_project_Certs_CSR_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Certs/CSR.md')
