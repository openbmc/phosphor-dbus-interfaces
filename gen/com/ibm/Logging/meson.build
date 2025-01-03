# Generated file; do not modify.
subdir('Policy')

sdbusplus_current_path = 'com/ibm/Logging'

generated_markdown += custom_target(
    'com/ibm/Logging/Policy__markdown'.underscorify(),
    input: [ '../../../../yaml/com/ibm/Logging/Policy.interface.yaml',  ],
    output: [ 'Policy.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/ibm/Logging/Policy',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

