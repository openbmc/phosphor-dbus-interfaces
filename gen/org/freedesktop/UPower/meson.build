# Generated file; do not modify.
subdir('Device')
generated_others += custom_target(
    'org/freedesktop/UPower/Device__markdown'.underscorify(),
    input: [ '../../../../yaml/org/freedesktop/UPower/Device.interface.yaml',  ],
    output: [ 'Device.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'org/freedesktop/UPower/Device',
    ],
)

