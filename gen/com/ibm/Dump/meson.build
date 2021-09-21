# Generated file; do not modify.
subdir('Create')
generated_others += custom_target(
    'com/ibm/Dump/Create__markdown'.underscorify(),
    input: [ '../../../../yaml/com/ibm/Dump/Create.interface.yaml',  ],
    output: [ 'Create.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/ibm/Dump/Create',
    ],
)

subdir('Entry')
subdir('ManagedBy')
generated_others += custom_target(
    'com/ibm/Dump/ManagedBy__markdown'.underscorify(),
    input: [ '../../../../yaml/com/ibm/Dump/ManagedBy.interface.yaml',  ],
    output: [ 'ManagedBy.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/ibm/Dump/ManagedBy',
    ],
)

