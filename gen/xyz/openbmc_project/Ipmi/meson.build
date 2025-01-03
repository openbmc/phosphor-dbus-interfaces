# Generated file; do not modify.
subdir('SOL')
subdir('SessionInfo')

sdbusplus_current_path = 'xyz/openbmc_project/Ipmi'

generated_others += custom_target(
    'xyz/openbmc_project/Ipmi/SOL__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Ipmi/SOL.interface.yaml',  ],
    output: [ 'SOL.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Ipmi/SOL',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Ipmi/SessionInfo__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Ipmi/SessionInfo.interface.yaml',  ],
    output: [ 'SessionInfo.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Ipmi/SessionInfo',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

