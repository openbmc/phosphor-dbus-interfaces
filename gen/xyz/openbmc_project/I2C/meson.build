# Generated file; do not modify.
subdir('I2CStats')
generated_others += custom_target(
    'xyz/openbmc_project/I2C/I2CStats__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/I2C/I2CStats.interface.yaml',  ],
    output: [ 'I2CStats.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/I2C/I2CStats',
    ],
    build_by_default: true,
)

