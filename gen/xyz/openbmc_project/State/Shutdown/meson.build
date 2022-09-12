# Generated file; do not modify.
subdir('Inventory')
generated_others += custom_target(
    'xyz/openbmc_project/State/Shutdown/Inventory__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/State/Shutdown/Inventory.errors.yaml',  ],
    output: [ 'Inventory.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/State/Shutdown/Inventory',
    ],
)

subdir('Power')
generated_others += custom_target(
    'xyz/openbmc_project/State/Shutdown/Power__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/State/Shutdown/Power.errors.yaml',  ],
    output: [ 'Power.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/State/Shutdown/Power',
    ],
)

subdir('ThermalEvent')
generated_others += custom_target(
    'xyz/openbmc_project/State/Shutdown/ThermalEvent__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/State/Shutdown/ThermalEvent.errors.yaml',  ],
    output: [ 'ThermalEvent.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/State/Shutdown/ThermalEvent',
    ],
)

