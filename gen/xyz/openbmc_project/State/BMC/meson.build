# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/State/BMC__cpp'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/State/BMC.errors.yaml', '../../../../../yaml/xyz/openbmc_project/State/BMC.interface.yaml',  ],
    output: [ 'error.cpp', 'error.hpp', 'common.hpp', 'server.cpp', 'server.hpp', 'aserver.hpp', 'client.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/State/BMC',
    ],
)

