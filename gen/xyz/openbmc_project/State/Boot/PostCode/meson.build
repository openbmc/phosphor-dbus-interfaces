# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/State/Boot/PostCode__cpp'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/State/Boot/PostCode.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/State/Boot/PostCode',
    ],
)

