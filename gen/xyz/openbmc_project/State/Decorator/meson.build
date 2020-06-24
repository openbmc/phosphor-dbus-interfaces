# Generated file; do not modify.
subdir('Availability')
generated_others += custom_target(
    'xyz/openbmc_project/State/Decorator/Availability__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/State/Decorator/Availability.interface.yaml',  ],
    output: [ 'Availability.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/State/Decorator/Availability',
    ],
    build_by_default: true,
)

subdir('OperationalStatus')
generated_others += custom_target(
    'xyz/openbmc_project/State/Decorator/OperationalStatus__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/State/Decorator/OperationalStatus.interface.yaml',  ],
    output: [ 'OperationalStatus.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/State/Decorator/OperationalStatus',
    ],
    build_by_default: true,
)

