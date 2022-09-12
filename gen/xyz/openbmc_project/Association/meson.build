# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Association__cpp'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Association.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Association',
    ],
)

subdir('Definitions')
generated_others += custom_target(
    'xyz/openbmc_project/Association/Definitions__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Association/Definitions.interface.yaml',  ],
    output: [ 'Definitions.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Association/Definitions',
    ],
)

