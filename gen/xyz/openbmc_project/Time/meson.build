# Generated file; do not modify.
subdir('EpochTime')
subdir('Synchronization')

sdbusplus_current_path = 'xyz/openbmc_project/Time'

generated_sources += custom_target(
    'xyz/openbmc_project/Time__cpp'.underscorify(),
    input: ['../../../../yaml/xyz/openbmc_project/Time.errors.yaml'],
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
        meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Time',
    ],
    install: should_generate_cpp,
    install_dir: [false, get_option('includedir') / sdbusplus_current_path],
    build_by_default: should_generate_cpp,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Time/EpochTime__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Time/EpochTime.interface.yaml',
    ],
    output: ['EpochTime.md'],
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
        meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Time/EpochTime',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Time/Synchronization__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Time/Synchronization.interface.yaml',
    ],
    output: ['Synchronization.md'],
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
        meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Time/Synchronization',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

