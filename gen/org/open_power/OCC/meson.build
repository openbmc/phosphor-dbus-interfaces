# Generated file; do not modify.
subdir('Device')
subdir('PassThrough')
subdir('Status')

sdbusplus_current_path = 'org/open_power/OCC'

generated_markdown += custom_target(
    'org/open_power/OCC/Device__markdown'.underscorify(),
    input: [ '../../../../yaml/org/open_power/OCC/Device.errors.yaml',  ],
    output: [ 'Device.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'org/open_power/OCC/Device',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'org/open_power/OCC/PassThrough__markdown'.underscorify(),
    input: [ '../../../../yaml/org/open_power/OCC/PassThrough.interface.yaml',  ],
    output: [ 'PassThrough.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'org/open_power/OCC/PassThrough',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'org/open_power/OCC/Status__markdown'.underscorify(),
    input: [ '../../../../yaml/org/open_power/OCC/Status.interface.yaml',  ],
    output: [ 'Status.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'org/open_power/OCC/Status',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

