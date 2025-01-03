# Generated file; do not modify.
subdir('Inventory')
subdir('Power')
subdir('ThermalEvent')

sdbusplus_current_path = 'xyz/openbmc_project/State/Shutdown'

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Shutdown/Inventory__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/State/Shutdown/Inventory.errors.yaml',  ],
    output: [ 'Inventory.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/State/Shutdown/Inventory',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Shutdown/Power__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/State/Shutdown/Power.errors.yaml',  ],
    output: [ 'Power.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/State/Shutdown/Power',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Shutdown/ThermalEvent__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/State/Shutdown/ThermalEvent.errors.yaml',  ],
    output: [ 'ThermalEvent.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/State/Shutdown/ThermalEvent',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

