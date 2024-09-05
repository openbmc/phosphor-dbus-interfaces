# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Sensor/Threshold__cpp'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Sensor/Threshold.errors.yaml', '../../../../../yaml/xyz/openbmc_project/Sensor/Threshold.events.yaml',  ],
    output: [ 'error.cpp', 'error.hpp', 'event.cpp', 'event.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Sensor/Threshold',
    ],
)

subdir('Critical')
generated_others += custom_target(
    'xyz/openbmc_project/Sensor/Threshold/Critical__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Sensor/Threshold/Critical.interface.yaml',  ],
    output: [ 'Critical.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Sensor/Threshold/Critical',
    ],
)

subdir('HardShutdown')
generated_others += custom_target(
    'xyz/openbmc_project/Sensor/Threshold/HardShutdown__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Sensor/Threshold/HardShutdown.interface.yaml',  ],
    output: [ 'HardShutdown.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Sensor/Threshold/HardShutdown',
    ],
)

subdir('PerformanceLoss')
generated_others += custom_target(
    'xyz/openbmc_project/Sensor/Threshold/PerformanceLoss__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Sensor/Threshold/PerformanceLoss.interface.yaml',  ],
    output: [ 'PerformanceLoss.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Sensor/Threshold/PerformanceLoss',
    ],
)

subdir('SoftShutdown')
generated_others += custom_target(
    'xyz/openbmc_project/Sensor/Threshold/SoftShutdown__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Sensor/Threshold/SoftShutdown.interface.yaml',  ],
    output: [ 'SoftShutdown.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Sensor/Threshold/SoftShutdown',
    ],
)

subdir('Warning')
generated_others += custom_target(
    'xyz/openbmc_project/Sensor/Threshold/Warning__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Sensor/Threshold/Warning.interface.yaml',  ],
    output: [ 'Warning.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Sensor/Threshold/Warning',
    ],
)

