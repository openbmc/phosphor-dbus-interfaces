# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/State/Leak/Detector__cpp'.underscorify(),
    input: [ '../../../../../../yaml/xyz/openbmc_project/State/Leak/Detector.events.yaml', '../../../../../../yaml/xyz/openbmc_project/State/Leak/Detector.interface.yaml',  ],
    output: [ 'event.cpp', 'event.hpp', 'common.hpp', 'server.cpp', 'server.hpp', 'aserver.hpp', 'client.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/State/Leak/Detector',
    ],
)

