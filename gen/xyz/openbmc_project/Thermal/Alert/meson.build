# Generated file; do not modify.
subdir('Fans')
generated_others += custom_target(
    'xyz/openbmc_project/Thermal/Alert/Fans__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Thermal/Alert/Fans.interface.yaml',  ],
    output: [ 'Fans.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Thermal/Alert/Fans',
    ],
    build_by_default: true,
)

subdir('Temperature')
generated_others += custom_target(
    'xyz/openbmc_project/Thermal/Alert/Temperature__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Thermal/Alert/Temperature.interface.yaml',  ],
    output: [ 'Temperature.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Thermal/Alert/Temperature',
    ],
    build_by_default: true,
)

