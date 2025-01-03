# Generated file; do not modify.
subdir('Access')
subdir('UART')

sdbusplus_current_path = 'xyz/openbmc_project/Console'

generated_markdown += custom_target(
    'xyz/openbmc_project/Console/Access__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Console/Access.interface.yaml',  ],
    output: [ 'Access.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Console/Access',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Console/UART__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Console/UART.interface.yaml',  ],
    output: [ 'UART.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Console/UART',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

