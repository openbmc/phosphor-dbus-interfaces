# Generated file; do not modify.
subdir('Access')
generated_others += custom_target(
    'xyz/openbmc_project/Console/Access__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Console/Access.interface.yaml',  ],
    output: [ 'Access.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Console/Access',
    ],
)

subdir('UART')
generated_others += custom_target(
    'xyz/openbmc_project/Console/UART__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Console/UART.interface.yaml',  ],
    output: [ 'UART.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Console/UART',
    ],
)

