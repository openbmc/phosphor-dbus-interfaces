# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Logging/Syslog/Destination/Mail__cpp'.underscorify(),
    input: [ '../../../../../../../yaml/xyz/openbmc_project/Logging/Syslog/Destination/Mail.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../../yaml',
        'xyz/openbmc_project/Logging/Syslog/Destination/Mail',
    ],
)

subdir('Create')
generated_others += custom_target(
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
)

subdir('Entry')
generated_others += custom_target(
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
)

