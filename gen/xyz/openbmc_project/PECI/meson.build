# Generated file; do not modify.
subdir('raw')
generated_others += custom_target(
    'xyz/openbmc_project/PECI/raw__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/PECI/raw.interface.yaml',  ],
    output: [ 'raw.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/PECI/raw',
    ],
)

