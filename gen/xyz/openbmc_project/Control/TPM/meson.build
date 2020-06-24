# Generated file; do not modify.
subdir('Policy')
generated_others += custom_target(
    'xyz/openbmc_project/Control/TPM/Policy__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Control/TPM/Policy.interface.yaml',  ],
    output: [ 'Policy.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Control/TPM/Policy',
    ],
    build_by_default: true,
)

