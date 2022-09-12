# Generated file; do not modify.
generated_sources += custom_target(
    'com/intel/Protocol/PECI/Raw__cpp'.underscorify(),
    input: [ '../../../../../../yaml/com/intel/Protocol/PECI/Raw.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'com/intel/Protocol/PECI/Raw',
    ],
)

