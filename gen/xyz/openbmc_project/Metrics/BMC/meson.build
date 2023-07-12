# Generated file; do not modify.
subdir('CpuUtilization')
generated_others += custom_target(
    'xyz/openbmc_project/Metrics/BMC/CpuUtilization__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Metrics/BMC/CpuUtilization.interface.yaml',  ],
    output: [ 'CpuUtilization.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Metrics/BMC/CpuUtilization',
    ],
)

subdir('MemoryUtilization')
generated_others += custom_target(
    'xyz/openbmc_project/Metrics/BMC/MemoryUtilization__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Metrics/BMC/MemoryUtilization.interface.yaml',  ],
    output: [ 'MemoryUtilization.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Metrics/BMC/MemoryUtilization',
    ],
)

subdir('RebootStatistics')
generated_others += custom_target(
    'xyz/openbmc_project/Metrics/BMC/RebootStatistics__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Metrics/BMC/RebootStatistics.interface.yaml',  ],
    output: [ 'RebootStatistics.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Metrics/BMC/RebootStatistics',
    ],
)

