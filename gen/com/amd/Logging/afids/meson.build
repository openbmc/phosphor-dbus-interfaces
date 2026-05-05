# Generated file; do not modify.
subdir('AFID')

sdbusplus_current_path = 'com/amd/Logging/afids'

generated_markdown += custom_target(
    'com/amd/Logging/afids/AFID__markdown'.underscorify(),
    input: [
        '../../../../../yaml/com/amd/Logging/afids/AFID.interface.yaml',
    ],
    output: ['AFID.md'],
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
        'com/amd/Logging/afids/AFID',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

