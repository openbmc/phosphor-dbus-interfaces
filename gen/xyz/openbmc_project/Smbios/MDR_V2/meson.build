# Generated file; do not modify.

sdbusplus_current_path = 'xyz/openbmc_project/Smbios/MDR_V2'

generated_sources += custom_target(
    'xyz/openbmc_project/Smbios/MDR_V2__cpp'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Smbios/MDR_V2.errors.yaml',
        '../../../../../yaml/xyz/openbmc_project/Smbios/MDR_V2.interface.yaml',
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
        sdbuspp_gen_meson_prog,
        '--command',
        'cpp',
        '--output',
        meson.current_build_dir(),
        '--tool',
        sdbusplusplus_prog,
        '--directory',
        meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Smbios/MDR_V2',
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

