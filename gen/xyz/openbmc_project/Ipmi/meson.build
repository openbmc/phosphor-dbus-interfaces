# Generated file; do not modify.
subdir('SOL')
generated_others += custom_target(
    'xyz/openbmc_project/Ipmi/SOL__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Ipmi/SOL.interface.yaml',  ],
    output: [ 'SOL.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Ipmi/SOL',
    ],
    build_by_default: true,
)

subdir('SessionInfo')
generated_others += custom_target(
    'xyz/openbmc_project/Ipmi/SessionInfo__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Ipmi/SessionInfo.interface.yaml',  ],
    output: [ 'SessionInfo.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Ipmi/SessionInfo',
    ],
    build_by_default: true,
)

