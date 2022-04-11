# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Syslog__cpp'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Syslog.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Syslog',
    ],
)

subdir('Mail')
generated_others += custom_target(
    'xyz/openbmc_project/Syslog/Mail__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Syslog/Mail.interface.yaml',  ],
    output: [ 'Mail.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Syslog/Mail',
    ],
)

