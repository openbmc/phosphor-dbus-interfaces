# Generated file; do not modify.
subdir('BootProgress')

sdbusplus_current_path = 'com/ampere/AmpereOne'

generated_markdown += custom_target(
    'com/ampere/AmpereOne/BootProgress__markdown'.underscorify(),
    input: [
        '../../../../yaml/com/ampere/AmpereOne/BootProgress.events.yaml',
        '../../../../yaml/com/ampere/AmpereOne/BootProgress.interface.yaml',
    ],
    output: ['BootProgress.md'],
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
        'com/ampere/AmpereOne/BootProgress',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_registry += custom_target(
    'com/ampere/AmpereOne/BootProgress__registry'.underscorify(),
    input: ['../../../../yaml/com/ampere/AmpereOne/BootProgress.events.yaml'],
    output: ['BootProgress.json'],
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
        'com/ampere/AmpereOne/BootProgress',
    ],
    install: should_generate_registry,
    install_dir: [inst_registry_dir / sdbusplus_current_path],
    build_by_default: should_generate_registry,
)

