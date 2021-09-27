# Generated file; do not modify.
subdir('Embedded')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Connector/Embedded__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Connector/Embedded.interface.yaml',  ],
    output: [ 'Embedded.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Connector/Embedded',
    ],
)

