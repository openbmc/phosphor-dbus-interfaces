# Generated file; do not modify.
subdir('TotalPower')

sdbusplus_current_path = 'xyz/openbmc_project/Sensor/Purpose'

generated_sources += custom_target(
    'xyz/openbmc_project/Sensor/Purpose__cpp'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Sensor/Purpose.interface.yaml',
    ],
    output: [
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
        'xyz/openbmc_project/Sensor/Purpose',
    ],
    install: should_generate_cpp,
    install_dir: [
        get_option('includedir') / sdbusplus_current_path,
        get_option('includedir') / sdbusplus_current_path,
        false,
        get_option('includedir') / sdbusplus_current_path,
        get_option('includedir') / sdbusplus_current_path,
    ],
    build_by_default: should_generate_cpp,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Sensor/Purpose/TotalPower__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Sensor/Purpose/TotalPower.interface.yaml',
    ],
    output: ['TotalPower.md'],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog,
        '--command',
        'markdown',
        '--output',
        meson.current_build_dir(),
        '--tool',
        sdbusplusplus_prog,
        '--directory',
        meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Sensor/Purpose/TotalPower',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

