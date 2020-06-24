# Generated file; do not modify.
subdir('FRU')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Source/PLDM/FRU__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Inventory/Source/PLDM/FRU.interface.yaml',  ],
    output: [ 'FRU.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Inventory/Source/PLDM/FRU',
    ],
    build_by_default: true,
)

subdir('Entity')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Source/PLDM/Entity__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Inventory/Source/PLDM/Entity.interface.yaml',  ],
    output: [ 'Entity.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Inventory/Source/PLDM/Entity',
    ],
    build_by_default: true,
)

