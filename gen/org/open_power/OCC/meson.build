# Generated file; do not modify.
subdir('PassThrough')
generated_others += custom_target(
    'org/open_power/OCC/PassThrough__markdown'.underscorify(),
    input: [ '../../../../yaml/org/open_power/OCC/PassThrough.interface.yaml',  ],
    output: [ 'PassThrough.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'org/open_power/OCC/PassThrough',
    ],
)

subdir('Status')
generated_others += custom_target(
    'org/open_power/OCC/Status__markdown'.underscorify(),
    input: [ '../../../../yaml/org/open_power/OCC/Status.interface.yaml',  ],
    output: [ 'Status.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'org/open_power/OCC/Status',
    ],
)

