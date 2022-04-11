# Generated file; do not modify.
subdir('Mail')
generated_others += custom_target(
    'xyz/openbmc_project/Logging/Syslog/Destination/Mail__markdown'.underscorify(),
    input: [ '../../../../../../yaml/xyz/openbmc_project/Logging/Syslog/Destination/Mail.interface.yaml',  ],
    output: [ 'Mail.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/Logging/Syslog/Destination/Mail',
    ],
)

