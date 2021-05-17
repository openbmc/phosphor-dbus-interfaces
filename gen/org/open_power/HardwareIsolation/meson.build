# Generated file; do not modify.
subdir('Entry')
generated_others += custom_target(
    'org/open_power/HardwareIsolation/Entry__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'org/open_power/HardwareIsolation/Entry.interface.yaml',  ],
    output: [ 'Entry.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'org/open_power/HardwareIsolation/Entry',
    ],
    build_by_default: true,
)

