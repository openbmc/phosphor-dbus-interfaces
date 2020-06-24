# Generated file; do not modify.
subdir('ACPIPowerState')
generated_others += custom_target(
    'xyz/openbmc_project/Control/Power/ACPIPowerState__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Control/Power/ACPIPowerState.interface.yaml',  ],
    output: [ 'ACPIPowerState.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Control/Power/ACPIPowerState',
    ],
    build_by_default: true,
)

subdir('Cap')
generated_others += custom_target(
    'xyz/openbmc_project/Control/Power/Cap__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Control/Power/Cap.interface.yaml',  ],
    output: [ 'Cap.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Control/Power/Cap',
    ],
    build_by_default: true,
)

subdir('RestorePolicy')
generated_others += custom_target(
    'xyz/openbmc_project/Control/Power/RestorePolicy__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Control/Power/RestorePolicy.interface.yaml',  ],
    output: [ 'RestorePolicy.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Control/Power/RestorePolicy',
    ],
    build_by_default: true,
)

