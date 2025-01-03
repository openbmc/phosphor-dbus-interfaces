# Generated file; do not modify.
subdir('Mail')

sdbusplus_current_path = 'xyz/openbmc_project/Logging/Syslog/Destination'

generated_others += custom_target(
    'xyz/openbmc_project/Logging/Syslog/Destination/Mail__markdown'.underscorify(),
    input: [ '../../../../../../yaml/xyz/openbmc_project/Logging/Syslog/Destination/Mail.interface.yaml',  ],
    output: [ 'Mail.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/Logging/Syslog/Destination/Mail',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

