# Generated file; do not modify.
subdir('LampTest')
generated_others += custom_target(
    'com/ibm/Led/LampTest__markdown'.underscorify(),
    input: [ meson.source_root() / 'com/ibm/Led/LampTest.interface.yaml',  ],
    output: [ 'Policy.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'com/ibm/Led/LampTest',
    ],
    build_by_default: true,
)

