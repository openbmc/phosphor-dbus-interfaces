# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Network/Client__cpp'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Network/Client.interface.yaml',  ],
    output: [ 'common.hpp', 'server.cpp', 'server.hpp', 'aserver.hpp', 'client.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Network/Client',
    ],
)

subdir('Create')
generated_others += custom_target(
    'xyz/openbmc_project/Network/Client/Create__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Network/Client/Create.interface.yaml',  ],
    output: [ 'Create.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Network/Client/Create',
    ],
)

