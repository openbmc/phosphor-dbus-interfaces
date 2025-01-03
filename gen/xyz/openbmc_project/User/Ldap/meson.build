# Generated file; do not modify.
subdir('Config')
subdir('Create')

sdbusplus_current_path = 'xyz/openbmc_project/User/Ldap'

generated_others += custom_target(
    'xyz/openbmc_project/User/Ldap/Config__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/User/Ldap/Config.interface.yaml',  ],
    output: [ 'Config.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/User/Ldap/Config',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/User/Ldap/Create__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/User/Ldap/Create.interface.yaml',  ],
    output: [ 'Create.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/User/Ldap/Create',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

