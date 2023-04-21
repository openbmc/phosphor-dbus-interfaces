# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Inventory/Item/Board__cpp'.underscorify(),
    input: [ '../../../../../../yaml/xyz/openbmc_project/Inventory/Item/Board.interface.yaml',  ],
    output: [ 'common.hpp', 'server.cpp', 'server.hpp', 'client.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Board',
    ],
)

subdir('IOBoard')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Board/IOBoard__markdown'.underscorify(),
    input: [ '../../../../../../yaml/xyz/openbmc_project/Inventory/Item/Board/IOBoard.interface.yaml',  ],
    output: [ 'IOBoard.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Board/IOBoard',
    ],
)

subdir('Motherboard')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Board/Motherboard__markdown'.underscorify(),
    input: [ '../../../../../../yaml/xyz/openbmc_project/Inventory/Item/Board/Motherboard.interface.yaml',  ],
    output: [ 'Motherboard.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Board/Motherboard',
    ],
)

