generated_compile += custom_target(
  'error.cpp',
  output: 'error.cpp',
  input: '../MemoryECC.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-cpp', 'xyz.openbmc_project.Memory.MemoryECC'])

generated_compile += custom_target(
  'error.hpp',
  output: 'error.hpp',
  input: '../MemoryECC.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'exception-header', 'xyz.openbmc_project.Memory.MemoryECC'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Memory/MemoryECC')

install_data(
  '../MemoryECC.errors.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Memory')

xyz_openbmc_project_Memory_MemoryECC_md += custom_target(
  'error.md',
  output: 'error.md',
  input: '../MemoryECC.errors.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'error', 'markdown', 'xyz.openbmc_project.Memory.MemoryECC'])
generated_compile += custom_target(
  'server.cpp',
  output: 'server.cpp',
  input: '../MemoryECC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-cpp', 'xyz.openbmc_project.Memory.MemoryECC'])

generated_compile += custom_target(
  'server.hpp',
  output: 'server.hpp',
  input: '../MemoryECC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'server-header', 'xyz.openbmc_project.Memory.MemoryECC'],
  install: true,
  install_dir: get_option('includedir') / 'xyz/openbmc_project/Memory/MemoryECC')

install_data(
  '../MemoryECC.interface.yaml',
  install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml/xyz/openbmc_project/Memory')

xyz_openbmc_project_Memory_MemoryECC_md += custom_target(
  'interface.md',
  output: 'interface.md',
  input: '../MemoryECC.interface.yaml',
  capture: true,
  command: [sdbusplusplus_prog, '-r', phosphor_dbus_root, 'interface', 'markdown', 'xyz.openbmc_project.Memory.MemoryECC'])

