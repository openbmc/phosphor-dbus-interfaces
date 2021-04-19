# Generated file; do not modify.
subdir('HostFirmware')
generated_others += custom_target(
    'xyz/openbmc_project/Condition/HostFirmware__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'xyz/openbmc_project/Condition/HostFirmware.interface.yaml',  ],
    output: [ 'HostFirmware.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'xyz/openbmc_project/Condition/HostFirmware',
    ],
    build_by_default: true,
)

