# Generated file; do not modify.
subdir('Bond')
generated_others += custom_target(
    'xyz/openbmc_project/Network/Experimental/Bond__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Network/Experimental/Bond.interface.yaml',  ],
    output: [ 'Bond.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Network/Experimental/Bond',
    ],
)

subdir('Tunnel')
generated_others += custom_target(
    'xyz/openbmc_project/Network/Experimental/Tunnel__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Network/Experimental/Tunnel.interface.yaml',  ],
    output: [ 'Tunnel.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Network/Experimental/Tunnel',
    ],
)

