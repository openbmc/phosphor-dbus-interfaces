# Generated file; do not modify.
subdir('RestrictionMode')
generated_others += custom_target(
    'xyz/openbmc_project/Control/Security/RestrictionMode__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Control/Security/RestrictionMode.interface.yaml',  ],
    output: [ 'RestrictionMode.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Control/Security/RestrictionMode',
    ],
)

subdir('SpecialMode')
generated_others += custom_target(
    'xyz/openbmc_project/Control/Security/SpecialMode__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Control/Security/SpecialMode.interface.yaml',  ],
    output: [ 'SpecialMode.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Control/Security/SpecialMode',
    ],
)

