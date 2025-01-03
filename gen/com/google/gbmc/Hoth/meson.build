# Generated file; do not modify.

sdbusplus_current_path = 'com/google/gbmc/Hoth'

generated_sources += custom_target(
    'com/google/gbmc/Hoth__cpp'.underscorify(),
    input: [
        '../../../../../yaml/com/google/gbmc/Hoth.errors.yaml',
        '../../../../../yaml/com/google/gbmc/Hoth.interface.yaml',
    ],
    output: [
        'error.cpp',
        'error.hpp',
        'common.hpp',
        'server.hpp',
        'server.cpp',
        'aserver.hpp',
        'client.hpp',
    ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'com/google/gbmc/Hoth',
    ],
    install: should_generate_cpp,
    install_dir: [
        false,
        get_option('includedir') / sdbusplus_current_path,
        get_option('includedir') / sdbusplus_current_path,
        get_option('includedir') / sdbusplus_current_path,
        false,
        get_option('includedir') / sdbusplus_current_path,
        get_option('includedir') / sdbusplus_current_path,
    ],
    build_by_default: should_generate_cpp,
)

