# Generated file; do not modify.
subdir('Create')
subdir('Entry')
subdir('NewDump')

sdbusplus_current_path = 'xyz/openbmc_project/Dump'

generated_markdown += custom_target(
    'xyz/openbmc_project/Dump/Create__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Dump/Create.errors.yaml',
        '../../../../yaml/xyz/openbmc_project/Dump/Create.interface.yaml',
    ],
    output: ['Create.md'],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog,
        '--command',
        'markdown',
        '--output',
        meson.current_build_dir(),
        '--tool',
        sdbusplusplus_prog,
        '--directory',
        meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Dump/Create',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Dump/Entry__markdown'.underscorify(),
    input: ['../../../../yaml/xyz/openbmc_project/Dump/Entry.interface.yaml'],
    output: ['Entry.md'],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog,
        '--command',
        'markdown',
        '--output',
        meson.current_build_dir(),
        '--tool',
        sdbusplusplus_prog,
        '--directory',
        meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Dump/Entry',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Dump/NewDump__markdown'.underscorify(),
    input: ['../../../../yaml/xyz/openbmc_project/Dump/NewDump.interface.yaml'],
    output: ['NewDump.md'],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog,
        '--command',
        'markdown',
        '--output',
        meson.current_build_dir(),
        '--tool',
        sdbusplusplus_prog,
        '--directory',
        meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Dump/NewDump',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

