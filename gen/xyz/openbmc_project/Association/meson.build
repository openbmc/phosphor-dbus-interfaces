# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Association__cpp'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/Association.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/Association',
    ],
)

subdir('Definitions')
generated_others += custom_target(
    'xyz/openbmc_project/Association/Definitions__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/Association/Definitions.interface.yaml',  ],
    output: [ 'Definitions.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/Association/Definitions',
    ],
    build_by_default: true,
)

