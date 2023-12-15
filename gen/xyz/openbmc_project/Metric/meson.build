# Generated file; do not modify.
subdir('Reset')
generated_others += custom_target(
    'xyz/openbmc_project/Metric/Reset__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Metric/Reset.interface.yaml',  ],
    output: [ 'Reset.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Metric/Reset',
    ],
)

subdir('Value')
generated_others += custom_target(
    'xyz/openbmc_project/Metric/Value__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Metric/Value.interface.yaml',  ],
    output: [ 'Value.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Metric/Value',
    ],
)

