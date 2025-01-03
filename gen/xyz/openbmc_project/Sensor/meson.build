# Generated file; do not modify.
subdir('Accuracy')
subdir('Device')
subdir('Threshold')
subdir('Value')
subdir('ValueMutability')

sdbusplus_current_path = 'xyz/openbmc_project/Sensor'

generated_markdown += custom_target(
    'xyz/openbmc_project/Sensor/Accuracy__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Sensor/Accuracy.interface.yaml',  ],
    output: [ 'Accuracy.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Sensor/Accuracy',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Sensor/Device__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Sensor/Device.errors.yaml',  ],
    output: [ 'Device.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Sensor/Device',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Sensor/Threshold__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Sensor/Threshold.errors.yaml', '../../../../yaml/xyz/openbmc_project/Sensor/Threshold.events.yaml',  ],
    output: [ 'Threshold.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Sensor/Threshold',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_registry += custom_target(
    'xyz/openbmc_project/Sensor/Threshold__registry'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Sensor/Threshold.events.yaml',  ],
    output: [ 'Threshold.json' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'registry',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Sensor/Threshold',
    ],
    install: should_generate_registry,
    install_dir: [inst_registry_dir / sdbusplus_current_path],
    build_by_default: should_generate_registry,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Sensor/Value__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Sensor/Value.interface.yaml',  ],
    output: [ 'Value.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Sensor/Value',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Sensor/ValueMutability__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Sensor/ValueMutability.interface.yaml',  ],
    output: [ 'ValueMutability.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Sensor/ValueMutability',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

