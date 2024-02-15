# Generated file; do not modify.
subdir('Event')
generated_others += custom_target(
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
)

subdir('EventOEM')
generated_others += custom_target(
    'xyz/openbmc_project/PLDM/EventOEM__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/PLDM/EventOEM.errors.yaml',  ],
    output: [ 'EventOEM.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/PLDM/EventOEM',
    ],
)

subdir('PDR')
generated_others += custom_target(
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
)

subdir('Provider')
subdir('Requester')
generated_others += custom_target(
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
)

