# Generated file; do not modify.
subdir('PowerSignal')
generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Drive/PowerSignal__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/Inventory/Item/Drive/PowerSignal.interface.yaml',  ],
    output: [ 'PowerSignal.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/Inventory/Item/Drive/PowerSignal',
    ],
    build_by_default: true,
)

