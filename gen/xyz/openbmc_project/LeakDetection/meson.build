# Generated file; do not modify.
subdir('Detector')
generated_others += custom_target(
    'xyz/openbmc_project/LeakDetection/Detector__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/LeakDetection/Detector.interface.yaml',  ],
    output: [ 'Detector.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/LeakDetection/Detector',
    ],
)

subdir('Group')
generated_others += custom_target(
    'xyz/openbmc_project/LeakDetection/Group__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/LeakDetection/Group.interface.yaml',  ],
    output: [ 'Group.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/LeakDetection/Group',
    ],
)

subdir('Leak')
generated_others += custom_target(
    'xyz/openbmc_project/LeakDetection/Leak__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/LeakDetection/Leak.events.yaml',  ],
    output: [ 'Leak.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/LeakDetection/Leak',
    ],
)

