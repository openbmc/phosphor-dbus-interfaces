# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Time__cpp'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Time.errors.yaml',  ],
    output: [ 'error.cpp', 'error.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Time',
    ],
)

subdir('EpochTime')
generated_others += custom_target(
    'xyz/openbmc_project/Time/EpochTime__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Time/EpochTime.interface.yaml',  ],
    output: [ 'EpochTime.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Time/EpochTime',
    ],
)

subdir('Synchronization')
generated_others += custom_target(
    'xyz/openbmc_project/Time/Synchronization__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Time/Synchronization.interface.yaml',  ],
    output: [ 'Synchronization.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Time/Synchronization',
    ],
)

