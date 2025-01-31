# Generated file; do not modify.
subdir('ManufacturerExt')

sdbusplus_current_path = 'com/meta/Inventory'

generated_markdown += custom_target(
    'com/meta/Inventory/ManufacturerExt__markdown'.underscorify(),
    input: [
        '../../../../yaml/com/meta/Inventory/ManufacturerExt.interface.yaml',
    ],
    output: ['ManufacturerExt.md'],
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
        'com/meta/Inventory/ManufacturerExt',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

