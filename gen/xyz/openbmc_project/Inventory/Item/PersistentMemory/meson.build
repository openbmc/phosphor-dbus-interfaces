# Generated file; do not modify.
subdir('PowerManagementPolicy')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/PersistentMemory/PowerManagementPolicy__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Inventory/Item/PersistentMemory/PowerManagementPolicy.interface.yaml',  ],
    output: [ 'PowerManagementPolicy.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Inventory/Item/PersistentMemory/PowerManagementPolicy',
    ],
    build_by_default: true,
)

subdir('Partition')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/PersistentMemory/Partition__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Inventory/Item/PersistentMemory/Partition.interface.yaml',  ],
    output: [ 'Partition.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Inventory/Item/PersistentMemory/Partition',
    ],
    build_by_default: true,
)

generated_sources += custom_target(
    'xyz/openbmc_project/Inventory/Item/PersistentMemory__cpp'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Inventory/Item/PersistentMemory.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Inventory/Item/PersistentMemory',
    ],
)

subdir('SecurityCapabilities')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/PersistentMemory/SecurityCapabilities__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Inventory/Item/PersistentMemory/SecurityCapabilities.interface.yaml',  ],
    output: [ 'SecurityCapabilities.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Inventory/Item/PersistentMemory/SecurityCapabilities',
    ],
    build_by_default: true,
)

