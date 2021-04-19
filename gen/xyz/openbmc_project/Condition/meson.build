# Generated file; do not modify.
subdir('Host')
generated_others += custom_target(
    'xyz/openbmc_project/Condition/Host__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/Condition/Host.interface.yaml',  ],
    output: [ 'Host.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/Condition/Host',
    ],
    build_by_default: true,
)

