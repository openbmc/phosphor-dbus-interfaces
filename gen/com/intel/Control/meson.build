# Generated file; do not modify.
subdir('NMISource')
subdir('OCOTShutdownPolicy')

sdbusplus_current_path = 'com/intel/Control'

generated_markdown += custom_target(
    'com/intel/Control/NMISource__markdown'.underscorify(),
    input: [ '../../../../yaml/com/intel/Control/NMISource.interface.yaml',  ],
    output: [ 'NMISource.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/intel/Control/NMISource',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'com/intel/Control/OCOTShutdownPolicy__markdown'.underscorify(),
    input: [ '../../../../yaml/com/intel/Control/OCOTShutdownPolicy.interface.yaml',  ],
    output: [ 'OCOTShutdownPolicy.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/intel/Control/OCOTShutdownPolicy',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

