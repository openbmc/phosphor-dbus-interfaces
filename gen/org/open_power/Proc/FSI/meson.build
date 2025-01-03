# Generated file; do not modify.

sdbusplus_current_path = 'org/open_power/Proc/FSI'

generated_sources += custom_target(
    'org/open_power/Proc/FSI__cpp'.underscorify(),
    input: [
        '../../../../../yaml/org/open_power/Proc/FSI.errors.yaml',
    ],
    output: [
        'error.cpp',
        'error.hpp',
    ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'org/open_power/Proc/FSI',
    ],
    install: should_generate_cpp,
    install_dir: [
        false,
        get_option('includedir') / sdbusplus_current_path,
    ],
    build_by_default: should_generate_cpp,
)

