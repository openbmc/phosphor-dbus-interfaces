# Generated file; do not modify.
subdir('ROTLVs')
subdir('RWTLVs')
subdir('Settings')

sdbusplus_current_path = 'xyz/openbmc_project/Network/LLDP'

generated_markdown += custom_target(
    'xyz/openbmc_project/Network/LLDP/ROTLVs__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Network/LLDP/ROTLVs.interface.yaml',
    ],
    output: ['ROTLVs.md'],
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
        'xyz/openbmc_project/Network/LLDP/ROTLVs',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Network/LLDP/RWTLVs__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Network/LLDP/RWTLVs.interface.yaml',
    ],
    output: ['RWTLVs.md'],
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
        'xyz/openbmc_project/Network/LLDP/RWTLVs',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Network/LLDP/Settings__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Network/LLDP/Settings.interface.yaml',
    ],
    output: ['Settings.md'],
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
        'xyz/openbmc_project/Network/LLDP/Settings',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

