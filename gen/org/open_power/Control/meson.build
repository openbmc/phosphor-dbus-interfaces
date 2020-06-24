# Generated file; do not modify.
subdir('Host')
generated_others += custom_target(
    'org/open_power/Control/Host__markdown'.underscorify(),
    input: [ meson.source_root() / 'org/open_power/Control/Host.interface.yaml',  ],
    output: [ 'Host.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'org/open_power/Control/Host',
    ],
    build_by_default: true,
)

subdir('TPM')
