# Generated file; do not modify.
subdir('Attributes')
generated_others += custom_target(
    'xyz/openbmc_project/Control/Service/Attributes__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/Control/Service/Attributes.interface.yaml',  ],
    output: [ 'Attributes.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/Control/Service/Attributes',
    ],
    build_by_default: true,
)

subdir('SocketAttributes')
generated_others += custom_target(
    'xyz/openbmc_project/Control/Service/SocketAttributes__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/Control/Service/SocketAttributes.interface.yaml',  ],
    output: [ 'SocketAttributes.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/Control/Service/SocketAttributes',
    ],
    build_by_default: true,
)

