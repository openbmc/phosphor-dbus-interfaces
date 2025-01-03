# Generated file; do not modify.
subdir('Group')
subdir('Physical')

sdbusplus_current_path = 'xyz/openbmc_project/Led'

generated_markdown += custom_target(
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
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
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
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

