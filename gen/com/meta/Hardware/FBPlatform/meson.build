# Generated file; do not modify.
generated_sources += custom_target(
    'com/meta/Hardware/FBPlatform__cpp'.underscorify(),
    input: [ '../../../../../yaml/com/meta/Hardware/FBPlatform.events.yaml',  ],
    output: [ 'event.cpp', 'event.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'com/meta/Hardware/FBPlatform',
    ],
)

