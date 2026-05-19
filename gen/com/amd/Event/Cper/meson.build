# Generated file; do not modify.

sdbusplus_current_path = 'com/amd/Event/Cper'

generated_sources += custom_target(
    'com/amd/Event/Cper__cpp'.underscorify(),
    input: [
        '../../../../../yaml/com/amd/Event/Cper.events.yaml',
    ],
    output: [
        'event.cpp',
        'event.hpp',
    ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog,
        '--command',
        'cpp',
        '--output',
        meson.current_build_dir(),
        '--tool',
        sdbusplusplus_prog,
        '--directory',
        meson.current_source_dir() / '../../../../../yaml',
        'com/amd/Event/Cper',
    ],
    install: should_generate_cpp,
    install_dir: [
        false,
        get_option('includedir') / sdbusplus_current_path,
    ],
    build_by_default: should_generate_cpp,
)

