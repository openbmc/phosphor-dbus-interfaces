# Generated file; do not modify.
subdir('Watchdog')

sdbusplus_current_path = 'com/meta/State'

generated_markdown += custom_target(
    'com/meta/State/Watchdog__markdown'.underscorify(),
    input: [
        '../../../../yaml/com/meta/State/Watchdog.events.yaml',
    ],
    output: ['Watchdog.md'],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog,
        '--command',
        'markdown',
        '--output',
        meson.current_build_dir(),
        '--tool',
        sdbusplusplus_prog,
        '--directory',
        meson.current_source_dir() / '../../../../yaml',
        'com/meta/State/Watchdog',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_registry += custom_target(
    'com/meta/State/Watchdog__registry'.underscorify(),
    input: [
        '../../../../yaml/com/meta/State/Watchdog.events.yaml',
    ],
    output: ['Watchdog.json'],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog,
        '--command',
        'registry',
        '--output',
        meson.current_build_dir(),
        '--tool',
        sdbusplusplus_prog,
        '--directory',
        meson.current_source_dir() / '../../../../yaml',
        'com/meta/State/Watchdog',
    ],
    install: should_generate_registry,
    install_dir: [inst_registry_dir / sdbusplus_current_path],
    build_by_default: should_generate_registry,
)

