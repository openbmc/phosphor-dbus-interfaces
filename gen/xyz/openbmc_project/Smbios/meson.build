# Generated file; do not modify.
subdir('MDR_V2')
generated_others += custom_target(
    'xyz/openbmc_project/Smbios/MDR_V2__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Smbios/MDR_V2.errors.yaml', meson.source_root() / 'xyz/openbmc_project/Smbios/MDR_V2.interface.yaml',  ],
    output: [ 'MDR_V2.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Smbios/MDR_V2',
    ],
    build_by_default: true,
)

