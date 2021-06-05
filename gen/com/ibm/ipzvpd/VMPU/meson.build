# Generated file; do not modify.
generated_sources += custom_target(
    'com/ibm/ipzvpd/VMPU__cpp'.underscorify(),
    input: [ '../../../../../com/ibm/ipzvpd/VMPU.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../..',
        'com/ibm/ipzvpd/VMPU',
    ],
)

