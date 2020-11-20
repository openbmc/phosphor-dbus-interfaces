# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Sensor/Threshold__cpp'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Sensor/Threshold.errors.yaml',  ],
    output: [ 'error.cpp', 'error.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Sensor/Threshold',
    ],
)

subdir('Critical')
generated_others += custom_target(
    'xyz/openbmc_project/Sensor/Threshold/Critical__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Sensor/Threshold/Critical.interface.yaml',  ],
    output: [ 'Critical.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Sensor/Threshold/Critical',
    ],
    build_by_default: true,
)

subdir('Shutdown')
generated_others += custom_target(
    'xyz/openbmc_project/Sensor/Threshold/Shutdown__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Sensor/Threshold/Shutdown.interface.yaml',  ],
    output: [ 'Shutdown.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Sensor/Threshold/Shutdown',
    ],
    build_by_default: true,
)

subdir('SoftShutdown')
generated_others += custom_target(
    'xyz/openbmc_project/Sensor/Threshold/SoftShutdown__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Sensor/Threshold/SoftShutdown.interface.yaml',  ],
    output: [ 'SoftShutdown.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Sensor/Threshold/SoftShutdown',
    ],
    build_by_default: true,
)

subdir('Warning')
generated_others += custom_target(
    'xyz/openbmc_project/Sensor/Threshold/Warning__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Sensor/Threshold/Warning.interface.yaml',  ],
    output: [ 'Warning.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Sensor/Threshold/Warning',
    ],
    build_by_default: true,
)

