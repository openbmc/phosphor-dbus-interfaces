# Generated file; do not modify.
subdir('Hostboot')
generated_others += custom_target(
    'com/ibm/Dump/Entry/Hostboot__markdown'.underscorify(),
    input: [ '../../../../../com/ibm/Dump/Entry/Hostboot.interface.yaml',  ],
    output: [ 'Hostboot.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../..',
        'com/ibm/Dump/Entry/Hostboot',
    ],
)

subdir('Resource')
generated_others += custom_target(
    'com/ibm/Dump/Entry/Resource__markdown'.underscorify(),
    input: [ '../../../../../com/ibm/Dump/Entry/Resource.interface.yaml',  ],
    output: [ 'Resource.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../..',
        'com/ibm/Dump/Entry/Resource',
    ],
)

