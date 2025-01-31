# Generated file; do not modify.
subdir('Entry')

sdbusplus_current_path = 'org/open_power/Logging/PEL'

generated_sources += custom_target(
    'org/open_power/Logging/PEL__cpp'.underscorify(),
    input: ['../../../../../yaml/org/open_power/Logging/PEL.interface.yaml'],
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
        'org/open_power/Logging/PEL',
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
    'org/open_power/Logging/PEL/Entry__markdown'.underscorify(),
    input: [
        '../../../../../yaml/org/open_power/Logging/PEL/Entry.interface.yaml',
    ],
    output: ['Entry.md'],
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
        'org/open_power/Logging/PEL/Entry',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

