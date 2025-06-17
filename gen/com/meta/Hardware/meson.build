# Generated file; do not modify.
subdir('BMC')
subdir('Harma')
subdir('Yosemite5')

sdbusplus_current_path = 'com/meta/Hardware'

generated_markdown += custom_target(
    'com/meta/Hardware/BMC__markdown'.underscorify(),
    input: ['../../../../yaml/com/meta/Hardware/BMC.interface.yaml'],
    output: ['BMC.md'],
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
        'com/meta/Hardware/BMC',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'com/meta/Hardware/Harma__markdown'.underscorify(),
    input: ['../../../../yaml/com/meta/Hardware/Harma.interface.yaml'],
    output: ['Harma.md'],
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
        'com/meta/Hardware/Harma',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'com/meta/Hardware/Yosemite5__markdown'.underscorify(),
    input: ['../../../../yaml/com/meta/Hardware/Yosemite5.interface.yaml'],
    output: ['Yosemite5.md'],
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
        'com/meta/Hardware/Yosemite5',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

