# Generated file; do not modify.
subdir('Collection')
subdir('Manager')

sdbusplus_current_path = 'com/ibm/VPD'

generated_sources += custom_target(
    'com/ibm/VPD__cpp'.underscorify(),
    input: ['../../../../yaml/com/ibm/VPD.errors.yaml'],
    output: ['error.cpp', 'error.hpp'],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog,
        '--command',
        'cpp',
        '--output',
        meson.current_build_dir(),
        '--tool',
        sdbusplusplus_prog,
        '--directory',
        meson.current_source_dir() / '../../../../yaml',
        'com/ibm/VPD',
    ],
    install: should_generate_cpp,
    install_dir: [false, get_option('includedir') / sdbusplus_current_path],
    build_by_default: should_generate_cpp,
)

generated_markdown += custom_target(
    'com/ibm/VPD/Collection__markdown'.underscorify(),
    input: ['../../../../yaml/com/ibm/VPD/Collection.interface.yaml'],
    output: ['Collection.md'],
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
        'com/ibm/VPD/Collection',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'com/ibm/VPD/Manager__markdown'.underscorify(),
    input: ['../../../../yaml/com/ibm/VPD/Manager.interface.yaml'],
    output: ['Manager.md'],
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
        'com/ibm/VPD/Manager',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

