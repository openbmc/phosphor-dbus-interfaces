# Generated file; do not modify.
subdir('ChannelAccess')
generated_others += custom_target(
    'xyz/openbmc_project/Channel/ChannelAccess__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Channel/ChannelAccess.interface.yaml',  ],
    output: [ 'ChannelAccess.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Channel/ChannelAccess',
    ],
    build_by_default: true,
)

