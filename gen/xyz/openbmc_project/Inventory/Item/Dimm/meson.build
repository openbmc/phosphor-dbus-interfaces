# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Inventory/Item/Dimm__cpp'.underscorify(),
    input: [ '../../../../../../xyz/openbmc_project/Inventory/Item/Dimm.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../..',
        'xyz/openbmc_project/Inventory/Item/Dimm',
    ],
)

subdir('MemoryLocation')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Dimm/MemoryLocation__markdown'.underscorify(),
    input: [ '../../../../../../xyz/openbmc_project/Inventory/Item/Dimm/MemoryLocation.interface.yaml',  ],
    output: [ 'MemoryLocation.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../..',
        'xyz/openbmc_project/Inventory/Item/Dimm/MemoryLocation',
    ],
)

