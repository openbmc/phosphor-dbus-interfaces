# Generated file; do not modify.
subdir('Asset')
generated_others += custom_target(
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
)

