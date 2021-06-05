# Generated file; do not modify.
subdir('Callout')
generated_others += custom_target(
    'org/open_power/Common/Callout__markdown'.underscorify(),
    input: [ '../../../../org/open_power/Common/Callout.errors.yaml',  ],
    output: [ 'Callout.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../..',
        'org/open_power/Common/Callout',
    ],
)

