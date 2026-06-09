# Generated file; do not modify.
subdir('Cxl')
subdir('Host')

sdbusplus_current_path = 'com/meta/State'

generated_markdown += custom_target(
    'com/meta/State/Cxl__markdown'.underscorify(),
    input: [
        '../../../../yaml/com/meta/State/Cxl.events.yaml',
    ],
    output: ['Cxl.md'],
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
        'com/meta/State/Cxl',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_registry += custom_target(
    'com/meta/State/Cxl__registry'.underscorify(),
    input: [
        '../../../../yaml/com/meta/State/Cxl.events.yaml',
    ],
    output: ['Cxl.json'],
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
        'com/meta/State/Cxl',
    ],
    install: should_generate_registry,
    install_dir: [inst_registry_dir / sdbusplus_current_path],
    build_by_default: should_generate_registry,
)

generated_markdown += custom_target(
    'com/meta/State/Host__markdown'.underscorify(),
    input: [
        '../../../../yaml/com/meta/State/Host.events.yaml',
    ],
    output: ['Host.md'],
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
        'com/meta/State/Host',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_registry += custom_target(
    'com/meta/State/Host__registry'.underscorify(),
    input: [
        '../../../../yaml/com/meta/State/Host.events.yaml',
    ],
    output: ['Host.json'],
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
        'com/meta/State/Host',
    ],
    install: should_generate_registry,
    install_dir: [inst_registry_dir / sdbusplus_current_path],
    build_by_default: should_generate_registry,
)

