# Generated file; do not modify.
subdir('CredentialBootstrapping')

sdbusplus_current_path = 'xyz/openbmc_project/HostInterface'

generated_markdown += custom_target(
    'xyz/openbmc_project/HostInterface/CredentialBootstrapping__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/HostInterface/CredentialBootstrapping.interface.yaml',
    ],
    output: ['CredentialBootstrapping.md'],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog,
        '--command',
        'markdown',
        '--output',
        meson.current_build_dir(),
        '--tool',
        sdbusplusplus_prog,
        '--directory',
        meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/HostInterface/CredentialBootstrapping',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

