# Generated file; do not modify.
subdir('NMISource')
generated_others += custom_target(
    'xyz/openbmc_project/Chassis/Control/NMISource__markdown'.underscorify(),
    input: [ '../../../../../xyz/openbmc_project/Chassis/Control/NMISource.interface.yaml',  ],
    output: [ 'NMISource.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../..',
        'xyz/openbmc_project/Chassis/Control/NMISource',
    ],
)

subdir('Power')
generated_others += custom_target(
    'xyz/openbmc_project/Chassis/Control/Power__markdown'.underscorify(),
    input: [ '../../../../../xyz/openbmc_project/Chassis/Control/Power.interface.yaml',  ],
    output: [ 'Power.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../..',
        'xyz/openbmc_project/Chassis/Control/Power',
    ],
)

