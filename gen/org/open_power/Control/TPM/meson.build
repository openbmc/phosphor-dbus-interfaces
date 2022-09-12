# Generated file; do not modify.
subdir('SecurityKeys')
generated_others += custom_target(
    'org/open_power/Control/TPM/SecurityKeys__markdown'.underscorify(),
    input: [ '../../../../../yaml/org/open_power/Control/TPM/SecurityKeys.interface.yaml',  ],
    output: [ 'SecurityKeys.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'org/open_power/Control/TPM/SecurityKeys',
    ],
)

