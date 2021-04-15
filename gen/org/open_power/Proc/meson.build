# Generated file; do not modify.
subdir('FSI')
generated_others += custom_target(
    'org/open_power/Proc/FSI__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'org/open_power/Proc/FSI.errors.yaml',  ],
    output: [ 'FSI.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'org/open_power/Proc/FSI',
    ],
    build_by_default: true,
)

