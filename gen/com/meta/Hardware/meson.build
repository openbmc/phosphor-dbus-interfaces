# Generated file; do not modify.
subdir('BMC')
generated_others += custom_target(
    'com/meta/Hardware/BMC__markdown'.underscorify(),
    input: [ '../../../../yaml/com/meta/Hardware/BMC.interface.yaml',  ],
    output: [ 'BMC.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/meta/Hardware/BMC',
    ],
)

subdir('FBPlatform')
generated_others += custom_target(
    'com/meta/Hardware/FBPlatform__markdown'.underscorify(),
    input: [ '../../../../yaml/com/meta/Hardware/FBPlatform.events.yaml',  ],
    output: [ 'FBPlatform.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/meta/Hardware/FBPlatform',
    ],
)

subdir('FBUnifiedOEM')
generated_others += custom_target(
    'com/meta/Hardware/FBUnifiedOEM__markdown'.underscorify(),
    input: [ '../../../../yaml/com/meta/Hardware/FBUnifiedOEM.events.yaml',  ],
    output: [ 'FBUnifiedOEM.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/meta/Hardware/FBUnifiedOEM',
    ],
)

