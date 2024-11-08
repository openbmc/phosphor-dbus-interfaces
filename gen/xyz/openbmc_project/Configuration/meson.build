# Generated file; do not modify.
subdir('GPIODeviceDetect')
generated_others += custom_target(
    'xyz/openbmc_project/Configuration/GPIODeviceDetect__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Configuration/GPIODeviceDetect.interface.yaml',  ],
    output: [ 'GPIODeviceDetect.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Configuration/GPIODeviceDetect',
    ],
)

