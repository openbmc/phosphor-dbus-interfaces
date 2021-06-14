# Generated file; do not modify.
subdir('Chiplet')
generated_others += custom_target(
    'org/open_power/Inventory/Item/Chiplet__markdown'.underscorify(),
    input: [ '../../../../../yaml/org/open_power/Inventory/Item/Chiplet.interface.yaml',  ],
    output: [ 'Chiplet.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'org/open_power/Inventory/Item/Chiplet',
    ],
)

