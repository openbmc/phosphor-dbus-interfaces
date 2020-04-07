# Generated file; do not modify.
generated_sources += custom_target(
    'com/ibm/ipzvpd/CRP0__cpp'.underscorify(),
    input: [ meson.source_root() / 'com/ibm/ipzvpd/CRP0.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'com/ibm/ipzvpd/CRP0',
    ],
)

