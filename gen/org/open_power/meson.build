# Generated file; do not modify.
subdir('Common')
subdir('Control')
subdir('Host')
subdir('Inventory')
subdir('Logging')
subdir('OCC')
subdir('Proc')
subdir('Sensor')

sdbusplus_current_path = 'org/open_power'

generated_others += custom_target(
    'org/open_power/Host__markdown'.underscorify(),
    input: [ '../../../yaml/org/open_power/Host.errors.yaml',  ],
    output: [ 'Host.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../yaml',
        'org/open_power/Host',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

