# Generated file; do not modify.

sdbusplus_current_path = 'com/amd/State/Forwarded'

generated_sources += custom_target(
    'com/amd/State/Forwarded__cpp'.underscorify(),
    input: [
        '../../../../../yaml/com/amd/State/Forwarded.events.yaml',
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
        'com/amd/State/Forwarded',
    ],
    install: should_generate_cpp,
    install_dir: [
        false,
        get_option('includedir') / sdbusplus_current_path,
    ],
    build_by_default: should_generate_cpp,
)

