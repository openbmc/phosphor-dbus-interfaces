# Generated file; do not modify.
subdir('Progress')
generated_others += custom_target(
    'xyz/openbmc_project/Common/Decorator/Progress__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Common/Decorator/Progress.interface.yaml',  ],
    output: [ 'Progress.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Common/Decorator/Progress',
    ],
    build_by_default: true,
)

