# Generated file; do not modify.
generated_sources += custom_target(
    'org/open_power/Host/Access__cpp'.underscorify(),
    input: [ '../../../../../yaml/org/open_power/Host/Access.errors.yaml',  ],
    output: [ 'error.cpp', 'error.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'org/open_power/Host/Access',
    ],
)

