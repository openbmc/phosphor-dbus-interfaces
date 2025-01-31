# Generated file; do not modify.
subdir('Create')
subdir('Entry')
subdir('Notify')

sdbusplus_current_path = 'com/ibm/Dump'

generated_markdown += custom_target(
    'com/ibm/Dump/Create__markdown'.underscorify(),
    input: ['../../../../yaml/com/ibm/Dump/Create.interface.yaml'],
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
        'com/ibm/Dump/Create',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'com/ibm/Dump/Notify__markdown'.underscorify(),
    input: ['../../../../yaml/com/ibm/Dump/Notify.interface.yaml'],
    output: ['Notify.md'],
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
        'com/ibm/Dump/Notify',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

