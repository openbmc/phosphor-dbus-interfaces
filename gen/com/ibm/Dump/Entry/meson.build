# Generated file; do not modify.
subdir('Hardware')
subdir('Hostboot')
subdir('Resource')
subdir('SBE')

sdbusplus_current_path = 'com/ibm/Dump/Entry'

generated_markdown += custom_target(
    'com/ibm/Dump/Entry/Hardware__markdown'.underscorify(),
    input: [ '../../../../../yaml/com/ibm/Dump/Entry/Hardware.interface.yaml',  ],
    output: [ 'Hardware.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'com/ibm/Dump/Entry/Hardware',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'com/ibm/Dump/Entry/Hostboot__markdown'.underscorify(),
    input: [ '../../../../../yaml/com/ibm/Dump/Entry/Hostboot.interface.yaml',  ],
    output: [ 'Hostboot.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'com/ibm/Dump/Entry/Hostboot',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'com/ibm/Dump/Entry/Resource__markdown'.underscorify(),
    input: [ '../../../../../yaml/com/ibm/Dump/Entry/Resource.interface.yaml',  ],
    output: [ 'Resource.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'com/ibm/Dump/Entry/Resource',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'com/ibm/Dump/Entry/SBE__markdown'.underscorify(),
    input: [ '../../../../../yaml/com/ibm/Dump/Entry/SBE.interface.yaml',  ],
    output: [ 'SBE.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'com/ibm/Dump/Entry/SBE',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

