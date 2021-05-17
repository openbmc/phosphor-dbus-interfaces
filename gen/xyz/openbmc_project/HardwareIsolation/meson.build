# Generated file; do not modify.
subdir('Create')
generated_others += custom_target(
    'xyz/openbmc_project/HardwareIsolation/Create__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/HardwareIsolation/Create.interface.yaml',  ],
    output: [ 'Create.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/HardwareIsolation/Create',
    ],
)

subdir('Entry')
generated_others += custom_target(
    'xyz/openbmc_project/HardwareIsolation/Entry__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/HardwareIsolation/Entry.interface.yaml',  ],
    output: [ 'Entry.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/HardwareIsolation/Entry',
    ],
)

subdir('Errors')
generated_others += custom_target(
    'xyz/openbmc_project/HardwareIsolation/Errors__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/HardwareIsolation/Errors.errors.yaml',  ],
    output: [ 'Errors.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/HardwareIsolation/Errors',
    ],
)

