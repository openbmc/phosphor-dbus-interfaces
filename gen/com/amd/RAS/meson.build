# Generated file; do not modify.
subdir('Configuration')
generated_others += custom_target(
    'com/amd/RAS/Configuration__markdown'.underscorify(),
    input: [ '../../../../yaml/com/amd/RAS/Configuration.interface.yaml',  ],
    output: [ 'Configuration.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/amd/RAS/Configuration',
    ],
)

