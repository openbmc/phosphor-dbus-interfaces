# Generated file; do not modify.
subdir('Create')
generated_others += custom_target(
    'com/ibm/Dump/Create__markdown'.underscorify(),
    input: [ '../../../../yaml/com/ibm/Dump/Create.interface.yaml',  ],
    output: [ 'Create.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/ibm/Dump/Create',
    ],
)

subdir('Entry')
