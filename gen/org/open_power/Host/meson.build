# Generated file; do not modify.
subdir('Access')
subdir('Boot')

sdbusplus_current_path = 'org/open_power/Host'

generated_sources += custom_target(
    'org/open_power/Host__cpp'.underscorify(),
    input: [
        '../../../../yaml/org/open_power/Host.errors.yaml',
    ],
    output: [
        'error.cpp',
        'error.hpp',
    ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'org/open_power/Host',
    ],
    install: should_generate_cpp,
    install_dir: [
        false,
        get_option('includedir') / sdbusplus_current_path,
    ],
    build_by_default: should_generate_cpp,
)

generated_others += custom_target(
    'org/open_power/Host/Access__markdown'.underscorify(),
    input: [ '../../../../yaml/org/open_power/Host/Access.errors.yaml',  ],
    output: [ 'Access.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'org/open_power/Host/Access',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'org/open_power/Host/Boot__markdown'.underscorify(),
    input: [ '../../../../yaml/org/open_power/Host/Boot.errors.yaml',  ],
    output: [ 'Boot.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'org/open_power/Host/Boot',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

