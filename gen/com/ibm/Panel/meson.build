# Generated file; do not modify.
subdir('Panel')
generated_others += custom_target(
    'com/ibm/Panel/Panel__markdown'.underscorify(),
    input: [ '../../../../yaml/com/ibm/Panel/Panel.interface.yaml',  ],
    output: [ 'Panel.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/ibm/Panel/Panel',
    ],
)

