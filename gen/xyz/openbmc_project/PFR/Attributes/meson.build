# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/PFR/Attributes__cpp'.underscorify(),
    input: [ '../../../../../xyz/openbmc_project/PFR/Attributes.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../..',
        'xyz/openbmc_project/PFR/Attributes',
    ],
)

