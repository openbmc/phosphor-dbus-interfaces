# Generated file; do not modify.
subdir('CurrentOperatingConfig')
generated_others += custom_target(
    'xyz/openbmc_project/Control/Processor/CurrentOperatingConfig__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Control/Processor/CurrentOperatingConfig.interface.yaml',  ],
    output: [ 'CurrentOperatingConfig.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Control/Processor/CurrentOperatingConfig',
    ],
    build_by_default: true,
)

