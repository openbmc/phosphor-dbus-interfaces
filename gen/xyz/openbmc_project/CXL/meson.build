# Generated file; do not modify.
subdir('CCI')

sdbusplus_current_path = 'xyz/openbmc_project/CXL'

generated_markdown += custom_target(
    'xyz/openbmc_project/CXL/CCI__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/CXL/CCI.events.yaml',
    ],
    output: ['CCI.md'],
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
        'xyz/openbmc_project/CXL/CCI',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_registry += custom_target(
    'xyz/openbmc_project/CXL/CCI__registry'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/CXL/CCI.events.yaml',
    ],
    output: ['CCI.json'],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog,
        '--command',
        'registry',
        '--output',
        meson.current_build_dir(),
        '--tool',
        sdbusplusplus_prog,
        '--directory',
        meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/CXL/CCI',
    ],
    install: should_generate_registry,
    install_dir: [inst_registry_dir / sdbusplus_current_path],
    build_by_default: should_generate_registry,
)

