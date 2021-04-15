# Generated file; do not modify.
subdir('Common')
subdir('Control')
subdir('Host')
generated_others += custom_target(
    'org/open_power/Host__markdown'.underscorify(),
    input: [ meson.project_source_root() / 'org/open_power/Host.errors.yaml',  ],
    output: [ 'Host.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.project_source_root(),
        'org/open_power/Host',
    ],
    build_by_default: true,
)

subdir('Inventory')
subdir('Logging')
subdir('OCC')
subdir('Proc')
subdir('Sensor')
