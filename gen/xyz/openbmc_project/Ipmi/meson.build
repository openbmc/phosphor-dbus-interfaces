# Generated file; do not modify.
subdir('SOL')
generated_others += custom_target(
    'xyz/openbmc_project/Ipmi/SOL__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Ipmi/SOL.interface.yaml',  ],
    output: [ 'SOL.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Ipmi/SOL',
    ],
)

subdir('SessionInfo')
generated_others += custom_target(
    'xyz/openbmc_project/Ipmi/SessionInfo__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Ipmi/SessionInfo.interface.yaml',  ],
    output: [ 'SessionInfo.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Ipmi/SessionInfo',
    ],
)

