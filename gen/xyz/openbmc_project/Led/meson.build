# Generated file; do not modify.
subdir('Group')
generated_others += custom_target(
    'xyz/openbmc_project/Led/Group__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Led/Group.interface.yaml',  ],
    output: [ 'Group.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Led/Group',
    ],
    build_by_default: true,
)

subdir('Physical')
generated_others += custom_target(
    'xyz/openbmc_project/Led/Physical__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Led/Physical.interface.yaml',  ],
    output: [ 'Physical.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Led/Physical',
    ],
    build_by_default: true,
)

