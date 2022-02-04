# Generated file; do not modify.
generated_sources += custom_target(
    'org/google/Control/Hoth__cpp'.underscorify(),
    input: [ '../../../../../yaml/org/google/Control/Hoth.interface.yaml',  ],
    output: [ 'error.cpp', 'error.hpp', 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'org/google/Control/Hoth',
    ],
)

