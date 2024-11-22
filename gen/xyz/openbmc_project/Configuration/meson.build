# Generated file; do not modify.
subdir('GPIOLeakDetector')
generated_others += custom_target(
    'xyz/openbmc_project/Configuration/GPIOLeakDetector__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Configuration/GPIOLeakDetector.interface.yaml',  ],
    output: [ 'GPIOLeakDetector.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Configuration/GPIOLeakDetector',
    ],
)

