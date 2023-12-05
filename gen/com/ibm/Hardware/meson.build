# Generated file; do not modify.
subdir('Chassis')
generated_others += custom_target(
    'com/ibm/Hardware/Chassis__markdown'.underscorify(),
    input: [ '../../../../yaml/com/ibm/Hardware/Chassis.interface.yaml',  ],
    output: [ 'Chassis.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/ibm/Hardware/Chassis',
    ],
)

