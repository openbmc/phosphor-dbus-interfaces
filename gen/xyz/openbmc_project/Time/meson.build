# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Time__cpp'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Time.errors.yaml',  ],
    output: [ 'error.cpp', 'error.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Time',
    ],
)

subdir('EpochTime')
generated_others += custom_target(
    'xyz/openbmc_project/Time/EpochTime__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Time/EpochTime.interface.yaml',  ],
    output: [ 'EpochTime.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Time/EpochTime',
    ],
    build_by_default: true,
)

subdir('Synchronization')
generated_others += custom_target(
    'xyz/openbmc_project/Time/Synchronization__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Time/Synchronization.interface.yaml',  ],
    output: [ 'Synchronization.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Time/Synchronization',
    ],
    build_by_default: true,
)

