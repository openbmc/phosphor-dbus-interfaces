# Generated file; do not modify.
subdir('Device')
generated_others += custom_target(
    'xyz/openbmc_project/Sensor/Device__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/Sensor/Device.errors.yaml',  ],
    output: [ 'Device.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/Sensor/Device',
    ],
    build_by_default: true,
)

subdir('Threshold')
generated_others += custom_target(
    'xyz/openbmc_project/Sensor/Threshold__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/Sensor/Threshold.errors.yaml',  ],
    output: [ 'Threshold.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/Sensor/Threshold',
    ],
    build_by_default: true,
)

subdir('Value')
generated_others += custom_target(
    'xyz/openbmc_project/Sensor/Value__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/Sensor/Value.interface.yaml',  ],
    output: [ 'Value.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/Sensor/Value',
    ],
    build_by_default: true,
)

