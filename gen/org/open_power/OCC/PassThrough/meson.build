# Generated file; do not modify.
generated_sources += custom_target(
    'org/open_power/OCC/PassThrough__cpp'.underscorify(),
    input: [ meson.project_source_root() / 'org/open_power/OCC/PassThrough.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'org/open_power/OCC/PassThrough',
    ],
)

