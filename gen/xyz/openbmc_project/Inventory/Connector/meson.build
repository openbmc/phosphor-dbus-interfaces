# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Inventory/Connector__cpp'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Connector.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Connector',
    ],
)

subdir('Embedded')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Connector/Embedded__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Connector/Embedded.interface.yaml',  ],
    output: [ 'Embedded.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Connector/Embedded',
    ],
)

subdir('Slot')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Connector/Slot__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Connector/Slot.interface.yaml',  ],
    output: [ 'Slot.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Connector/Slot',
    ],
)

subdir('Socket')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Connector/Socket__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Connector/Socket.interface.yaml',  ],
    output: [ 'Socket.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Connector/Socket',
    ],
)

