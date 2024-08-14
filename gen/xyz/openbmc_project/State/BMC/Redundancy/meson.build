# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/State/BMC/Redundancy__cpp'.underscorify(),
    input: [ '../../../../../../yaml/xyz/openbmc_project/State/BMC/Redundancy.interface.yaml',  ],
    output: [ 'common.hpp', 'server.cpp', 'server.hpp', 'aserver.hpp', 'client.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/State/BMC/Redundancy',
    ],
)

subdir('Sibling')
generated_others += custom_target(
    'xyz/openbmc_project/State/BMC/Redundancy/Sibling__markdown'.underscorify(),
    input: [ '../../../../../../yaml/xyz/openbmc_project/State/BMC/Redundancy/Sibling.interface.yaml',  ],
    output: [ 'Sibling.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/State/BMC/Redundancy/Sibling',
    ],
)

