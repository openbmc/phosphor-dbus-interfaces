# Generated file; do not modify.
subdir('Report')
subdir('ReportManager')
subdir('Trigger')
subdir('TriggerManager')

sdbusplus_current_path = 'xyz/openbmc_project/Telemetry'

generated_markdown += custom_target(
    'xyz/openbmc_project/Telemetry/Report__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Telemetry/Report.interface.yaml',
    ],
    output: ['Report.md'],
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
        'xyz/openbmc_project/Telemetry/Report',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Telemetry/ReportManager__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Telemetry/ReportManager.interface.yaml',
    ],
    output: ['ReportManager.md'],
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
        'xyz/openbmc_project/Telemetry/ReportManager',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Telemetry/Trigger__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Telemetry/Trigger.interface.yaml',
    ],
    output: ['Trigger.md'],
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
        'xyz/openbmc_project/Telemetry/Trigger',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Telemetry/TriggerManager__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Telemetry/TriggerManager.interface.yaml',
    ],
    output: ['TriggerManager.md'],
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
        'xyz/openbmc_project/Telemetry/TriggerManager',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

