# Generated file; do not modify.

sdbusplus_current_path = 'xyz/openbmc_project/Control/Device'

generated_sources += custom_target(
    'xyz/openbmc_project/Control/Device__cpp'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Control/Device.errors.yaml',
    ],
    output: ['error.cpp', 'error.hpp'],
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
        'xyz/openbmc_project/Control/Device',
    ],
    install: should_generate_cpp,
    install_dir: [false, get_option('includedir') / sdbusplus_current_path],
    build_by_default: should_generate_cpp,
)

