# Generated file; do not modify.
subdir('Dump')
subdir('Hardware')
subdir('Logging')
subdir('VPD')
subdir('ipzvpd')

sdbusplus_current_path = 'com/ibm'

generated_others += custom_target(
    'com/ibm/VPD__markdown'.underscorify(),
    input: [ '../../../yaml/com/ibm/VPD.errors.yaml',  ],
    output: [ 'VPD.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../yaml',
        'com/ibm/VPD',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

