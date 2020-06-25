# Generated file; do not modify.
subdir('Report')
generated_others += custom_target(
    'xyz/openbmc_project/Telemetry/Report__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Telemetry/Report.interface.yaml',  ],
    output: [ 'Report.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Telemetry/Report',
    ],
    build_by_default: true,
)

subdir('ReportManager')
generated_others += custom_target(
    'xyz/openbmc_project/Telemetry/ReportManager__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Telemetry/ReportManager.interface.yaml',  ],
    output: [ 'ReportManager.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Telemetry/ReportManager',
    ],
    build_by_default: true,
)

