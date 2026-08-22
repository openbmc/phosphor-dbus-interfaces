# Generated file; do not modify.
subdir('Processed')
subdir('Raw')

sdbusplus_current_path = 'xyz/openbmc_project/Logging/Extension/CPER'

generated_markdown += custom_target(
    'xyz/openbmc_project/Logging/Extension/CPER/Processed__markdown'.underscorify(),
    input: [
        '../../../../../../yaml/xyz/openbmc_project/Logging/Extension/CPER/Processed.interface.yaml',
    ],
    output: ['Processed.md'],
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
        meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/Logging/Extension/CPER/Processed',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Logging/Extension/CPER/Raw__markdown'.underscorify(),
    input: [
        '../../../../../../yaml/xyz/openbmc_project/Logging/Extension/CPER/Raw.interface.yaml',
    ],
    output: ['Raw.md'],
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
        meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/Logging/Extension/CPER/Raw',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

