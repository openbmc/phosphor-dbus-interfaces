# Generated file; do not modify.
subdir('Hoth')
generated_others += custom_target(
    'com/google/gbmc/Hoth__markdown'.underscorify(),
    input: [ '../../../../yaml/com/google/gbmc/Hoth.errors.yaml', '../../../../yaml/com/google/gbmc/Hoth.interface.yaml',  ],
    output: [ 'Hoth.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/google/gbmc/Hoth',
    ],
)

