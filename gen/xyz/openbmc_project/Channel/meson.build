# Generated file; do not modify.
subdir('ChannelAccess')
generated_others += custom_target(
    'xyz/openbmc_project/Channel/ChannelAccess__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Channel/ChannelAccess.interface.yaml',  ],
    output: [ 'ChannelAccess.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Channel/ChannelAccess',
    ],
)

