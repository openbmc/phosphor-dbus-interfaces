# Generated file; do not modify.
subdir('ObjectManager')

sdbusplus_current_path = 'org/freedesktop/DBus'

generated_markdown += custom_target(
    'org/freedesktop/DBus/ObjectManager__markdown'.underscorify(),
    input: [
        '../../../../yaml/org/freedesktop/DBus/ObjectManager.interface.yaml',
    ],
    output: ['ObjectManager.md'],
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
        'org/freedesktop/DBus/ObjectManager',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

