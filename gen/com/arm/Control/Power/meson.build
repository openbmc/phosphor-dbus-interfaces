# Generated file; do not modify.
subdir('Limit')

sdbusplus_current_path = 'com/arm/Control/Power'

generated_markdown += custom_target(
    'com/arm/Control/Power/Limit__markdown'.underscorify(),
    input: [
        '../../../../../yaml/com/arm/Control/Power/Limit.interface.yaml',
    ],
    output: ['Limit.md'],
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
        meson.current_source_dir() / '../../../../../yaml',
        'com/arm/Control/Power/Limit',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

