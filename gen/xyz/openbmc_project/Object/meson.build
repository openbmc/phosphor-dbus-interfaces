# Generated file; do not modify.
subdir('Delete')
generated_others += custom_target(
    'xyz/openbmc_project/Object/Delete__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Object/Delete.interface.yaml',  ],
    output: [ 'Delete.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Object/Delete',
    ],
)

subdir('Enable')
generated_others += custom_target(
    'xyz/openbmc_project/Object/Enable__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Object/Enable.interface.yaml',  ],
    output: [ 'Enable.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Object/Enable',
    ],
)

