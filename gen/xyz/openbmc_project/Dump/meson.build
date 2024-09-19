# Generated file; do not modify.
subdir('Create')
generated_others += custom_target(
    'xyz/openbmc_project/Dump/Create__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Dump/Create.errors.yaml', '../../../../yaml/xyz/openbmc_project/Dump/Create.interface.yaml',  ],
    output: [ 'Create.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Dump/Create',
    ],
)

subdir('Entry')
generated_others += custom_target(
    'xyz/openbmc_project/Dump/Entry__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Dump/Entry.interface.yaml',  ],
    output: [ 'Entry.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Dump/Entry',
    ],
)

subdir('NewDump')
generated_others += custom_target(
    'xyz/openbmc_project/Dump/NewDump__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Dump/NewDump.interface.yaml',  ],
    output: [ 'NewDump.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Dump/NewDump',
    ],
)

