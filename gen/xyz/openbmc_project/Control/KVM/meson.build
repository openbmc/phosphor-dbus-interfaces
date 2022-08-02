# Generated file; do not modify.
subdir('Screenshot')
generated_others += custom_target(
    'xyz/openbmc_project/Control/KVM/Screenshot__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Control/KVM/Screenshot.interface.yaml',  ],
    output: [ 'Screenshot.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Control/KVM/Screenshot',
    ],
)

