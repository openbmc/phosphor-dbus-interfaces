# Generated file; do not modify.
subdir('Buttons')
subdir('Control')
subdir('Intrusion')
generated_others += custom_target(
    'xyz/openbmc_project/Chassis/Intrusion__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Chassis/Intrusion.interface.yaml',  ],
    output: [ 'Intrusion.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Chassis/Intrusion',
    ],
    build_by_default: true,
)

subdir('Common')
generated_others += custom_target(
    'xyz/openbmc_project/Chassis/Common__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Chassis/Common.errors.yaml',  ],
    output: [ 'Common.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Chassis/Common',
    ],
    build_by_default: true,
)

