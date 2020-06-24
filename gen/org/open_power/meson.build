# Generated file; do not modify.
subdir('OCC')
subdir('Proc')
subdir('Host')
subdir('Common')
subdir('Inventory')
subdir('Sensor')
generated_others += custom_target(
    'org/open_power/Host__markdown'.underscorify(),
    input: [ meson.source_root() / 'org/open_power/Host.errors.yaml',  ],
    output: [ 'Host.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'org/open_power/Host',
    ],
    build_by_default: true,
)

subdir('Control')
subdir('Logging')
