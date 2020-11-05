# Generated file; do not modify.
subdir('Resource')
generated_others += custom_target(
    'com/ibm/Dump/Entry/Resource__markdown'.underscorify(),
    input: [ meson.source_root() / 'com/ibm/Dump/Entry/Resource.interface.yaml',  ],
    output: [ 'Resource.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'com/ibm/Dump/Entry/Resource',
    ],
    build_by_default: true,
)

