# Generated file; do not modify.
subdir('Config')
generated_others += custom_target(
    'xyz/openbmc_project/User/Ldap/Config__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/User/Ldap/Config.interface.yaml',  ],
    output: [ 'Config.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/User/Ldap/Config',
    ],
    build_by_default: true,
)

subdir('Create')
generated_others += custom_target(
    'xyz/openbmc_project/User/Ldap/Create__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/User/Ldap/Create.interface.yaml',  ],
    output: [ 'Create.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/User/Ldap/Create',
    ],
    build_by_default: true,
)

