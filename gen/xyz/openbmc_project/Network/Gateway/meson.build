# Generated file; do not modify.
subdir('Create')
generated_others += custom_target(
    'xyz/openbmc_project/Network/Gateway/Create__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Network/Gateway/Create.interface.yaml',  ],
    output: [ 'Create.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Network/Gateway/Create',
    ],
)

subdir('StaticGateway')
generated_others += custom_target(
    'xyz/openbmc_project/Network/Gateway/StaticGateway__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Network/Gateway/StaticGateway.interface.yaml',  ],
    output: [ 'StaticGateway.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Network/Gateway/StaticGateway',
    ],
)

