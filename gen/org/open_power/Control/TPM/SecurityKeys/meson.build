# Generated file; do not modify.
generated_sources += custom_target(
    'org/open_power/Control/TPM/SecurityKeys__cpp'.underscorify(),
    input: [ meson.source_root() / 'org/open_power/Control/TPM/SecurityKeys.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'org/open_power/Control/TPM/SecurityKeys',
    ],
)

