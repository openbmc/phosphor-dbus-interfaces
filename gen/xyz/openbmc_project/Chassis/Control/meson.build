# Generated file; do not modify.
subdir('Power')
generated_others += custom_target(
    'xyz/openbmc_project/Chassis/Control/Power__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Chassis/Control/Power.interface.yaml',  ],
    output: [ 'Power.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Chassis/Control/Power',
    ],
)

