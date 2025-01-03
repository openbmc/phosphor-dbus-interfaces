# Generated file; do not modify.
subdir('PostCode')
subdir('Progress')
subdir('Raw')

sdbusplus_current_path = 'xyz/openbmc_project/State/Boot'

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Boot/PostCode__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/State/Boot/PostCode.interface.yaml',  ],
    output: [ 'PostCode.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/State/Boot/PostCode',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Boot/Progress__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/State/Boot/Progress.interface.yaml',  ],
    output: [ 'Progress.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/State/Boot/Progress',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Boot/Raw__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/State/Boot/Raw.interface.yaml',  ],
    output: [ 'Raw.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/State/Boot/Raw',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

