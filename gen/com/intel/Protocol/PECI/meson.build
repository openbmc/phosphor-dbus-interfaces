# Generated file; do not modify.
subdir('Raw')

sdbusplus_current_path = 'com/intel/Protocol/PECI'

generated_markdown += custom_target(
    'com/intel/Protocol/PECI/Raw__markdown'.underscorify(),
    input: ['../../../../../yaml/com/intel/Protocol/PECI/Raw.interface.yaml'],
    output: ['Raw.md'],
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
        'com/intel/Protocol/PECI/Raw',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

