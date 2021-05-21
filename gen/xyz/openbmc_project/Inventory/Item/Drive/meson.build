# Generated file; do not modify.
subdir('Power')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Drive/Power__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/Inventory/Item/Drive/Power.interface.yaml',  ],
    output: [ 'Power.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/Inventory/Item/Drive/Power',
    ],
    build_by_default: true,
)

