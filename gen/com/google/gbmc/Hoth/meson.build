# Generated file; do not modify.
generated_sources += custom_target(
    'com/google/gbmc/Hoth__cpp'.underscorify(),
    input: [ '../../../../../yaml/com/google/gbmc/Hoth.errors.yaml', '../../../../../yaml/com/google/gbmc/Hoth.interface.yaml',  ],
    output: [ 'error.cpp', 'error.hpp', 'common.hpp', 'server.cpp', 'server.hpp', 'aserver.hpp', 'client.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'com/google/gbmc/Hoth',
    ],
)

