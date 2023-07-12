# Generated file; do not modify.
subdir('Value')
generated_others += custom_target(
    'xyz/openbmc_project/Metrics/Value__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Metrics/Value.interface.yaml',  ],
    output: [ 'Value.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Metrics/Value',
    ],
)

