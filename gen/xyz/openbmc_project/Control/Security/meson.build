# Generated file; do not modify.
subdir('SpecialMode')
generated_others += custom_target(
    'xyz/openbmc_project/Control/Security/SpecialMode__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Control/Security/SpecialMode.interface.yaml',  ],
    output: [ 'SpecialMode.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Control/Security/SpecialMode',
    ],
    build_by_default: true,
)

subdir('RestrictionMode')
generated_others += custom_target(
    'xyz/openbmc_project/Control/Security/RestrictionMode__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Control/Security/RestrictionMode.interface.yaml',  ],
    output: [ 'RestrictionMode.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Control/Security/RestrictionMode',
    ],
    build_by_default: true,
)

