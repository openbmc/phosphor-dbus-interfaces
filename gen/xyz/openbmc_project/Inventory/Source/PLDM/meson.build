# Generated file; do not modify.
subdir('Entity')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Source/PLDM/Entity__markdown'.underscorify(),
    input: [ '../../../../../../yaml/xyz/openbmc_project/Inventory/Source/PLDM/Entity.interface.yaml',  ],
    output: [ 'Entity.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/Inventory/Source/PLDM/Entity',
    ],
)

subdir('FRU')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Source/PLDM/FRU__markdown'.underscorify(),
    input: [ '../../../../../../yaml/xyz/openbmc_project/Inventory/Source/PLDM/FRU.interface.yaml',  ],
    output: [ 'FRU.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/Inventory/Source/PLDM/FRU',
    ],
)

