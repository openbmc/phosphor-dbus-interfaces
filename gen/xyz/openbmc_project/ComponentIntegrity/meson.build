# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/ComponentIntegrity__cpp'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/ComponentIntegrity.interface.yaml',  ],
    output: [ 'common.hpp', 'server.cpp', 'server.hpp', 'client.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/ComponentIntegrity',
    ],
)

subdir('SPDM')
generated_others += custom_target(
    'xyz/openbmc_project/ComponentIntegrity/SPDM__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/ComponentIntegrity/SPDM.interface.yaml',  ],
    output: [ 'SPDM.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/ComponentIntegrity/SPDM',
    ],
)

