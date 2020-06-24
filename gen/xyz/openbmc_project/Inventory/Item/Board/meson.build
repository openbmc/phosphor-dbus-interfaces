# Generated file; do not modify.
subdir('Motherboard')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Board/Motherboard__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Inventory/Item/Board/Motherboard.interface.yaml',  ],
    output: [ 'Motherboard.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Inventory/Item/Board/Motherboard',
    ],
    build_by_default: true,
)

generated_sources += custom_target(
    'xyz/openbmc_project/Inventory/Item/Board__cpp'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Inventory/Item/Board.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Inventory/Item/Board',
    ],
)

subdir('IOBoard')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Board/IOBoard__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Inventory/Item/Board/IOBoard.interface.yaml',  ],
    output: [ 'IOBoard.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Inventory/Item/Board/IOBoard',
    ],
    build_by_default: true,
)

