# Generated file; do not modify.
subdir('Configuration')

sdbusplus_current_path = 'com/amd/RAS'

generated_markdown += custom_target(
    'com/amd/RAS/Configuration__markdown'.underscorify(),
    input: ['../../../../yaml/com/amd/RAS/Configuration.interface.yaml'],
    output: ['Configuration.md'],
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
        'com/amd/RAS/Configuration',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

