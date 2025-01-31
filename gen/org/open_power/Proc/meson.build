# Generated file; do not modify.
subdir('FSI')

sdbusplus_current_path = 'org/open_power/Proc'

generated_markdown += custom_target(
    'org/open_power/Proc/FSI__markdown'.underscorify(),
    input: ['../../../../yaml/org/open_power/Proc/FSI.errors.yaml'],
    output: ['FSI.md'],
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
        'org/open_power/Proc/FSI',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

