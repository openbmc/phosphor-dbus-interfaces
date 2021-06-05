# Generated file; do not modify.
subdir('Create')
generated_others += custom_target(
    'com/ibm/Dump/Create__markdown'.underscorify(),
    input: [ '../../../../com/ibm/Dump/Create.interface.yaml',  ],
    output: [ 'Create.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../..',
        'com/ibm/Dump/Create',
    ],
)

subdir('Entry')
