# Generated file; do not modify.
subdir('Asset')
generated_others += custom_target(
    'org/open_power/Inventory/Decorator/Asset__markdown'.underscorify(),
    input: [ meson.source_root() / 'org/open_power/Inventory/Decorator/Asset.interface.yaml',  ],
    output: [ 'Asset.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'org/open_power/Inventory/Decorator/Asset',
    ],
    build_by_default: true,
)

