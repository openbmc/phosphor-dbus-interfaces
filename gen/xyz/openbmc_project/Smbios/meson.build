# Generated file; do not modify.
subdir('MDR_V2')

sdbusplus_current_path = 'xyz/openbmc_project/Smbios'

generated_markdown += custom_target(
    'xyz/openbmc_project/Smbios/MDR_V2__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Smbios/MDR_V2.errors.yaml',
        '../../../../yaml/xyz/openbmc_project/Smbios/MDR_V2.interface.yaml',
    ],
    output: ['MDR_V2.md'],
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
        'xyz/openbmc_project/Smbios/MDR_V2',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

