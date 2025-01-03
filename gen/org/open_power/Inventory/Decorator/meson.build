# Generated file; do not modify.
subdir('Asset')

sdbusplus_current_path = 'org/open_power/Inventory/Decorator'

generated_markdown += custom_target(
    'org/open_power/Inventory/Decorator/Asset__markdown'.underscorify(),
    input: [ '../../../../../yaml/org/open_power/Inventory/Decorator/Asset.interface.yaml',  ],
    output: [ 'Asset.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'org/open_power/Inventory/Decorator/Asset',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

