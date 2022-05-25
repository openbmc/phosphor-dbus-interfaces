# Generated file; do not modify.
subdir('Backplane')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Location/Backplane__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Location/Backplane.interface.yaml',  ],
    output: [ 'Backplane.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Location/Backplane',
    ],
)

subdir('Bay')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Location/Bay__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Location/Bay.interface.yaml',  ],
    output: [ 'Bay.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Location/Bay',
    ],
)

