# Generated file; do not modify.
subdir('ThermalPower')
generated_others += custom_target(
    'xyz/openbmc_project/Debug/Pid/ThermalPower__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Debug/Pid/ThermalPower.interface.yaml',  ],
    output: [ 'ThermalPower.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Debug/Pid/ThermalPower',
    ],
)

subdir('Zone')
generated_others += custom_target(
    'xyz/openbmc_project/Debug/Pid/Zone__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Debug/Pid/Zone.interface.yaml',  ],
    output: [ 'Zone.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Debug/Pid/Zone',
    ],
)

