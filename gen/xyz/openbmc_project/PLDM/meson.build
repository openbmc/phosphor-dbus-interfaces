# Generated file; do not modify.
subdir('Event')
subdir('PDR')
subdir('Provider')
subdir('Requester')

sdbusplus_current_path = 'xyz/openbmc_project/PLDM'

generated_markdown += custom_target(
    'xyz/openbmc_project/PLDM/Event__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/PLDM/Event.interface.yaml',  ],
    output: [ 'Event.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/PLDM/Event',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/PLDM/PDR__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/PLDM/PDR.interface.yaml',  ],
    output: [ 'PDR.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/PLDM/PDR',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/PLDM/Requester__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/PLDM/Requester.interface.yaml',  ],
    output: [ 'Requester.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/PLDM/Requester',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

