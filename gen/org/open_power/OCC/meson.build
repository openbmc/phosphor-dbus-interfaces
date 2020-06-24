# Generated file; do not modify.
subdir('PassThrough')
generated_others += custom_target(
    'org/open_power/OCC/PassThrough__markdown'.underscorify(),
    input: [ meson.source_root() / 'org/open_power/OCC/PassThrough.interface.yaml',  ],
    output: [ 'PassThrough.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'org/open_power/OCC/PassThrough',
    ],
    build_by_default: true,
)

subdir('Status')
generated_others += custom_target(
    'org/open_power/OCC/Status__markdown'.underscorify(),
    input: [ meson.source_root() / 'org/open_power/OCC/Status.interface.yaml',  ],
    output: [ 'Status.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'org/open_power/OCC/Status',
    ],
    build_by_default: true,
)

