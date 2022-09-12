# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Inventory/Item/PersistentMemory__cpp'.underscorify(),
    input: [ '../../../../../../yaml/xyz/openbmc_project/Inventory/Item/PersistentMemory.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/PersistentMemory',
    ],
)

subdir('Partition')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/PersistentMemory/Partition__markdown'.underscorify(),
    input: [ '../../../../../../yaml/xyz/openbmc_project/Inventory/Item/PersistentMemory/Partition.interface.yaml',  ],
    output: [ 'Partition.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/PersistentMemory/Partition',
    ],
)

subdir('PowerManagementPolicy')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/PersistentMemory/PowerManagementPolicy__markdown'.underscorify(),
    input: [ '../../../../../../yaml/xyz/openbmc_project/Inventory/Item/PersistentMemory/PowerManagementPolicy.interface.yaml',  ],
    output: [ 'PowerManagementPolicy.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/PersistentMemory/PowerManagementPolicy',
    ],
)

subdir('SecurityCapabilities')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/PersistentMemory/SecurityCapabilities__markdown'.underscorify(),
    input: [ '../../../../../../yaml/xyz/openbmc_project/Inventory/Item/PersistentMemory/SecurityCapabilities.interface.yaml',  ],
    output: [ 'SecurityCapabilities.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/PersistentMemory/SecurityCapabilities',
    ],
)

