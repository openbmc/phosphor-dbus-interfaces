# Generated file; do not modify.

sdbusplus_current_path = 'com/ampere/AmpereOne/BootProgress'

generated_sources += custom_target(
    'com/ampere/AmpereOne/BootProgress__cpp'.underscorify(),
    input: [
        '../../../../../yaml/com/ampere/AmpereOne/BootProgress.events.yaml',
        '../../../../../yaml/com/ampere/AmpereOne/BootProgress.interface.yaml',
    ],
    output: [
        'event.cpp',
        'event.hpp',
        'common.hpp',
        'server.hpp',
        'server.cpp',
        'aserver.hpp',
        'client.hpp',
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
        'com/ampere/AmpereOne/BootProgress',
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

