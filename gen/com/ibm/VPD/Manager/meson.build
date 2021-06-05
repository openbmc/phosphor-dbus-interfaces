# Generated file; do not modify.
generated_sources += custom_target(
    'com/ibm/VPD/Manager__cpp'.underscorify(),
    input: [ '../../../../../com/ibm/VPD/Manager.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../..',
        'com/ibm/VPD/Manager',
    ],
)

