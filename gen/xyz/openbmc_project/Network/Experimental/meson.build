# Generated file; do not modify.
subdir('Bond')
generated_others += custom_target(
    'xyz/openbmc_project/Network/Experimental/Bond__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/Network/Experimental/Bond.interface.yaml',  ],
    output: [ 'Bond.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/Network/Experimental/Bond',
    ],
    build_by_default: true,
)

subdir('Tunnel')
generated_others += custom_target(
    'xyz/openbmc_project/Network/Experimental/Tunnel__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/Network/Experimental/Tunnel.interface.yaml',  ],
    output: [ 'Tunnel.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/Network/Experimental/Tunnel',
    ],
    build_by_default: true,
)

