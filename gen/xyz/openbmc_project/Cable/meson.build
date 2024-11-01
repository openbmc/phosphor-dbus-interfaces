# Generated file; do not modify.
subdir('Cable')
generated_others += custom_target(
    'xyz/openbmc_project/Cable/Cable__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Cable/Cable.events.yaml',  ],
    output: [ 'Cable.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Cable/Cable',
    ],
)

subdir('CableMonitor')
generated_others += custom_target(
    'xyz/openbmc_project/Cable/CableMonitor__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Cable/CableMonitor.interface.yaml',  ],
    output: [ 'CableMonitor.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Cable/CableMonitor',
    ],
)

