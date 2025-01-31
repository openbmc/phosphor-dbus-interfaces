# Generated file; do not modify.
subdir('Reset')
subdir('Value')

sdbusplus_current_path = 'xyz/openbmc_project/Metric'

generated_markdown += custom_target(
    'xyz/openbmc_project/Metric/Reset__markdown'.underscorify(),
    input: ['../../../../yaml/xyz/openbmc_project/Metric/Reset.interface.yaml'],
    output: ['Reset.md'],
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
        'xyz/openbmc_project/Metric/Reset',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Metric/Value__markdown'.underscorify(),
    input: ['../../../../yaml/xyz/openbmc_project/Metric/Value.interface.yaml'],
    output: ['Value.md'],
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
        'xyz/openbmc_project/Metric/Value',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

