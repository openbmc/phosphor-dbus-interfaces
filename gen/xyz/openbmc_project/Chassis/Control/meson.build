# Generated file; do not modify.
subdir('NMISource')
generated_others += custom_target(
    'xyz/openbmc_project/Chassis/Control/NMISource__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Chassis/Control/NMISource.interface.yaml',  ],
    output: [ 'NMISource.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Chassis/Control/NMISource',
    ],
    build_by_default: true,
)

subdir('Power')
generated_others += custom_target(
    'xyz/openbmc_project/Chassis/Control/Power__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Chassis/Control/Power.interface.yaml',  ],
    output: [ 'Power.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Chassis/Control/Power',
    ],
    build_by_default: true,
)

