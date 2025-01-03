# Generated file; do not modify.
subdir('Delete')
subdir('Enable')

sdbusplus_current_path = 'xyz/openbmc_project/Object'

generated_markdown += custom_target(
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
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
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
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

