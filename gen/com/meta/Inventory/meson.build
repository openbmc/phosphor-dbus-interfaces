# Generated file; do not modify.
subdir('ManufacturerExt')
generated_others += custom_target(
    'com/meta/Inventory/ManufacturerExt__markdown'.underscorify(),
    input: [ '../../../../yaml/com/meta/Inventory/ManufacturerExt.interface.yaml',  ],
    output: [ 'ManufacturerExt.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/meta/Inventory/ManufacturerExt',
    ],
)

