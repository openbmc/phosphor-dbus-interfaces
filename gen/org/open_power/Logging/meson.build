# Generated file; do not modify.
subdir('PEL')
generated_others += custom_target(
    'org/open_power/Logging/PEL__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'org/open_power/Logging/PEL.interface.yaml',  ],
    output: [ 'PEL.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'org/open_power/Logging/PEL',
    ],
    build_by_default: true,
)

