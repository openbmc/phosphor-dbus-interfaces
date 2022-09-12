# Generated file; do not modify.
subdir('Group')
generated_others += custom_target(
    'xyz/openbmc_project/Led/Group__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Led/Group.interface.yaml',  ],
    output: [ 'Group.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Led/Group',
    ],
)

subdir('Physical')
generated_others += custom_target(
    'xyz/openbmc_project/Led/Physical__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Led/Physical.interface.yaml',  ],
    output: [ 'Physical.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Led/Physical',
    ],
)

