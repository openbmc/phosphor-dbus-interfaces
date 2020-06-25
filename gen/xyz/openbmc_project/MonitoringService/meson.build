# Generated file; do not modify.
subdir('Report')
generated_others += custom_target(
    'xyz/openbmc_project/MonitoringService/Report__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/MonitoringService/Report.interface.yaml',  ],
    output: [ 'Report.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/MonitoringService/Report',
    ],
    build_by_default: true,
)

subdir('ReportManager')
generated_others += custom_target(
    'xyz/openbmc_project/MonitoringService/ReportManager__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/MonitoringService/ReportManager.interface.yaml',  ],
    output: [ 'ReportManager.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/MonitoringService/ReportManager',
    ],
    build_by_default: true,
)

