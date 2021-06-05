# Generated file; do not modify.
subdir('Common')
generated_others += custom_target(
    'xyz/openbmc_project/BIOSConfig/Common__markdown'.underscorify(),
    input: [ '../../../../xyz/openbmc_project/BIOSConfig/Common.errors.yaml',  ],
    output: [ 'Common.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../..',
        'xyz/openbmc_project/BIOSConfig/Common',
    ],
)

subdir('Manager')
generated_others += custom_target(
    'xyz/openbmc_project/BIOSConfig/Manager__markdown'.underscorify(),
    input: [ '../../../../xyz/openbmc_project/BIOSConfig/Manager.interface.yaml',  ],
    output: [ 'Manager.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../..',
        'xyz/openbmc_project/BIOSConfig/Manager',
    ],
)

subdir('Password')
generated_others += custom_target(
    'xyz/openbmc_project/BIOSConfig/Password__markdown'.underscorify(),
    input: [ '../../../../xyz/openbmc_project/BIOSConfig/Password.interface.yaml',  ],
    output: [ 'Password.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../..',
        'xyz/openbmc_project/BIOSConfig/Password',
    ],
)

