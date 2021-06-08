# Generated file; do not modify.
subdir('Event')
generated_others += custom_target(
    'xyz/openbmc_project/PLDM/Event__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/PLDM/Event.interface.yaml',  ],
    output: [ 'Event.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/PLDM/Event',
    ],
    build_by_default: true,
)

subdir('PDR')
generated_others += custom_target(
    'xyz/openbmc_project/PLDM/PDR__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/PLDM/PDR.interface.yaml',  ],
    output: [ 'PDR.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/PLDM/PDR',
    ],
    build_by_default: true,
)

subdir('Provider')
subdir('Requester')
generated_others += custom_target(
    'xyz/openbmc_project/PLDM/Requester__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/PLDM/Requester.interface.yaml',  ],
    output: [ 'Requester.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/PLDM/Requester',
    ],
    build_by_default: true,
)

