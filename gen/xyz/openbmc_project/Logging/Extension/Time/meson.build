# Generated file; do not modify.
subdir('OriginTime')

sdbusplus_current_path = 'xyz/openbmc_project/Logging/Extension/Time'

generated_markdown += custom_target(
    'xyz/openbmc_project/Logging/Extension/Time/OriginTime__markdown'.underscorify(),
    input: [
        '../../../../../../yaml/xyz/openbmc_project/Logging/Extension/Time/OriginTime.interface.yaml',
    ],
    output: ['OriginTime.md'],
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
        'xyz/openbmc_project/Logging/Extension/Time/OriginTime',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

