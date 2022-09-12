# Generated file; do not modify.
subdir('Host')
generated_others += custom_target(
    'org/open_power/Control/Host__markdown'.underscorify(),
    input: [ '../../../../yaml/org/open_power/Control/Host.interface.yaml',  ],
    output: [ 'Host.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'org/open_power/Control/Host',
    ],
)

subdir('TPM')
