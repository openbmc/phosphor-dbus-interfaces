# Generated file; do not modify.
subdir('Embedded')
subdir('Port')
subdir('Slot')

sdbusplus_current_path = 'xyz/openbmc_project/Inventory/Connector'

generated_markdown += custom_target(
    'xyz/openbmc_project/Inventory/Connector/Embedded__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Inventory/Connector/Embedded.interface.yaml',
    ],
    output: ['Embedded.md'],
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
        'xyz/openbmc_project/Inventory/Connector/Embedded',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Inventory/Connector/Port__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Inventory/Connector/Port.interface.yaml',
    ],
    output: ['Port.md'],
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
        'xyz/openbmc_project/Inventory/Connector/Port',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Inventory/Connector/Slot__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Inventory/Connector/Slot.interface.yaml',
    ],
    output: ['Slot.md'],
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
        'xyz/openbmc_project/Inventory/Connector/Slot',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

