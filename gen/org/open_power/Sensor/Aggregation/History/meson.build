# Generated file; do not modify.
subdir('Average')
subdir('Maximum')

sdbusplus_current_path = 'org/open_power/Sensor/Aggregation/History'

generated_others += custom_target(
    'org/open_power/Sensor/Aggregation/History/Average__markdown'.underscorify(),
    input: [ '../../../../../../yaml/org/open_power/Sensor/Aggregation/History/Average.interface.yaml',  ],
    output: [ 'Average.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'org/open_power/Sensor/Aggregation/History/Average',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'org/open_power/Sensor/Aggregation/History/Maximum__markdown'.underscorify(),
    input: [ '../../../../../../yaml/org/open_power/Sensor/Aggregation/History/Maximum.interface.yaml',  ],
    output: [ 'Maximum.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'org/open_power/Sensor/Aggregation/History/Maximum',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

