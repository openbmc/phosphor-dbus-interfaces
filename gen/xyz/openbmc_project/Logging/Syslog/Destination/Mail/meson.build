# Generated file; do not modify.
subdir('Create')
subdir('Entry')

sdbusplus_current_path = 'xyz/openbmc_project/Logging/Syslog/Destination/Mail'

generated_sources += custom_target(
    'xyz/openbmc_project/Logging/Syslog/Destination/Mail__cpp'.underscorify(),
    input: [
        '../../../../../../../yaml/xyz/openbmc_project/Logging/Syslog/Destination/Mail.interface.yaml',
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
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../../yaml',
        'xyz/openbmc_project/Logging/Syslog/Destination/Mail',
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
    'xyz/openbmc_project/Logging/Syslog/Destination/Mail/Create__markdown'.underscorify(),
    input: [ '../../../../../../../yaml/xyz/openbmc_project/Logging/Syslog/Destination/Mail/Create.interface.yaml',  ],
    output: [ 'Create.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../../yaml',
        'xyz/openbmc_project/Logging/Syslog/Destination/Mail/Create',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Logging/Syslog/Destination/Mail/Entry__markdown'.underscorify(),
    input: [ '../../../../../../../yaml/xyz/openbmc_project/Logging/Syslog/Destination/Mail/Entry.interface.yaml',  ],
    output: [ 'Entry.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../../yaml',
        'xyz/openbmc_project/Logging/Syslog/Destination/Mail/Entry',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

