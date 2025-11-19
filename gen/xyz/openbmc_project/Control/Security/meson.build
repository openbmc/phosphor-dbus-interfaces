# Generated file; do not modify.
subdir('RestrictionMode')
subdir('SPDM')
subdir('SpecialMode')

sdbusplus_current_path = 'xyz/openbmc_project/Control/Security'

generated_markdown += custom_target(
    'xyz/openbmc_project/Control/Security/RestrictionMode__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Control/Security/RestrictionMode.interface.yaml',
    ],
    output: ['RestrictionMode.md'],
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
        meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Control/Security/RestrictionMode',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Control/Security/SpecialMode__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Control/Security/SpecialMode.interface.yaml',
    ],
    output: ['SpecialMode.md'],
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
        meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Control/Security/SpecialMode',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

