# Generated file; do not modify.
subdir('Attributes')
generated_others += custom_target(
    'xyz/openbmc_project/Control/Service/Attributes__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Control/Service/Attributes.interface.yaml',  ],
    output: [ 'Attributes.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Control/Service/Attributes',
    ],
)

subdir('SocketAttributes')
generated_others += custom_target(
    'xyz/openbmc_project/Control/Service/SocketAttributes__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Control/Service/SocketAttributes.interface.yaml',  ],
    output: [ 'SocketAttributes.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Control/Service/SocketAttributes',
    ],
)

