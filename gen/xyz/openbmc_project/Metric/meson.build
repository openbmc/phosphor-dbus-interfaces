# Generated file; do not modify.
subdir('BMC')
generated_others += custom_target(
    'xyz/openbmc_project/Metric/BMC__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Metric/BMC.interface.yaml',  ],
    output: [ 'BMC.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Metric/BMC',
    ],
)

subdir('Daemon')
generated_others += custom_target(
    'xyz/openbmc_project/Metric/Daemon__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Metric/Daemon.interface.yaml',  ],
    output: [ 'Daemon.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Metric/Daemon',
    ],
)

subdir('Port')
generated_others += custom_target(
    'xyz/openbmc_project/Metric/Port__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Metric/Port.interface.yaml',  ],
    output: [ 'Port.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Metric/Port',
    ],
)

