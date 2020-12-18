# Generated file; do not modify.
subdir('Dump')
subdir('Logging')
subdir('VPD')
generated_others += custom_target(
    'com/ibm/VPD__markdown'.underscorify(),
    input: [ meson.source_root() / 'com/ibm/VPD.errors.yaml',  ],
    output: [ 'VPD.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'com/ibm/VPD',
    ],
    build_by_default: true,
)

subdir('ipzvpd')
