# Generated file; do not modify.
subdir('BMC')

sdbusplus_current_path = 'com/meta/Hardware'

generated_markdown += custom_target(
    'com/meta/Hardware/BMC__markdown'.underscorify(),
    input: [ '../../../../yaml/com/meta/Hardware/BMC.interface.yaml',  ],
    output: [ 'BMC.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/meta/Hardware/BMC',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

