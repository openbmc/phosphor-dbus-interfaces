# Generated file; do not modify.
subdir('Endpoint')
generated_others += custom_target(
    'xyz/openbmc_project/MCTP/Endpoint__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/MCTP/Endpoint.interface.yaml',  ],
    output: [ 'Endpoint.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/MCTP/Endpoint',
    ],
    build_by_default: true,
)

