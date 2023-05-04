# Generated file; do not modify.
subdir('Trigger')
generated_others += custom_target(
    'com/ampere/CrashCapture/Trigger__markdown'.underscorify(),
    input: [ '../../../../yaml/com/ampere/CrashCapture/Trigger.interface.yaml',  ],
    output: [ 'Trigger.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/ampere/CrashCapture/Trigger',
    ],
)

