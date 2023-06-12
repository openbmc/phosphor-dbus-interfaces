# Generated file; do not modify.
subdir('Buttons')
subdir('Common')
generated_others += custom_target(
    'xyz/openbmc_project/Chassis/Common__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Chassis/Common.errors.yaml',  ],
    output: [ 'Common.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Chassis/Common',
    ],
)

subdir('Control')
subdir('Intrusion')
generated_others += custom_target(
    'xyz/openbmc_project/Chassis/Intrusion__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Chassis/Intrusion.interface.yaml',  ],
    output: [ 'Intrusion.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Chassis/Intrusion',
    ],
)

subdir('TrustedComponent')
generated_others += custom_target(
    'xyz/openbmc_project/Chassis/TrustedComponent__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Chassis/TrustedComponent.interface.yaml',  ],
    output: [ 'TrustedComponent.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Chassis/TrustedComponent',
    ],
)

