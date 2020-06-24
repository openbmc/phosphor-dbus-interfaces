# Generated file; do not modify.
subdir('DeleteAll')
generated_others += custom_target(
    'xyz/openbmc_project/Collection/DeleteAll__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Collection/DeleteAll.interface.yaml',  ],
    output: [ 'DeleteAll.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Collection/DeleteAll',
    ],
    build_by_default: true,
)

