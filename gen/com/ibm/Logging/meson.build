# Generated file; do not modify.
subdir('Policy')
generated_others += custom_target(
    'com/ibm/Logging/Policy__markdown'.underscorify(),
    input: [ '../../../../yaml/com/ibm/Logging/Policy.interface.yaml',  ],
    output: [ 'Policy.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/ibm/Logging/Policy',
    ],
)

