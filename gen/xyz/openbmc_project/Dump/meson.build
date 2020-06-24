# Generated file; do not modify.
subdir('Entry')
generated_others += custom_target(
    'xyz/openbmc_project/Dump/Entry__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Dump/Entry.interface.yaml',  ],
    output: [ 'Entry.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Dump/Entry',
    ],
    build_by_default: true,
)

subdir('NewDump')
generated_others += custom_target(
    'xyz/openbmc_project/Dump/NewDump__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Dump/NewDump.interface.yaml',  ],
    output: [ 'NewDump.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Dump/NewDump',
    ],
    build_by_default: true,
)

subdir('Create')
generated_others += custom_target(
    'xyz/openbmc_project/Dump/Create__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Dump/Create.errors.yaml', meson.source_root() / 'xyz/openbmc_project/Dump/Create.interface.yaml',  ],
    output: [ 'Create.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Dump/Create',
    ],
    build_by_default: true,
)

