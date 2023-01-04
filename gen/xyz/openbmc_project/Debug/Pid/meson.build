# Generated file; do not modify.
subdir('Power')
generated_others += custom_target(
    'xyz/openbmc_project/Debug/Pid/Power__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Debug/Pid/Power.interface.yaml',  ],
    output: [ 'Power.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Control/Debug/Pid/Power',
    ],
)

subdir('Thermal')
generated_others += custom_target(
    'xyz/openbmc_project/Debug/Pid/Thermal__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Debug/Pid/Thermal.interface.yaml',  ],
    output: [ 'Thermal.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Control/Debug/Pid/Thermal',
    ],
)

subdir('Zone')
generated_others += custom_target(
    'xyz/openbmc_project/Debug/Pid/Zone__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Debug/Pid/Zone.interface.yaml',  ],
    output: [ 'Zone.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Control/Debug/Pid/Zone',
    ],
)

