# Generated file; do not modify.
subdir('MDR_V2')
generated_others += custom_target(
    'xyz/openbmc_project/Smbios/MDR_V2__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Smbios/MDR_V2.errors.yaml', '../../../../yaml/xyz/openbmc_project/Smbios/MDR_V2.interface.yaml',  ],
    output: [ 'MDR_V2.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Smbios/MDR_V2',
    ],
)

