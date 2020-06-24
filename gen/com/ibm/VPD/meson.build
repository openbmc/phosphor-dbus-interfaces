# Generated file; do not modify.
generated_sources += custom_target(
    'com/ibm/VPD__cpp'.underscorify(),
    input: [ meson.source_root() / 'com/ibm/VPD.errors.yaml',  ],
    output: [ 'error.cpp', 'error.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'com/ibm/VPD',
    ],
)

subdir('Manager')
generated_others += custom_target(
    'com/ibm/VPD/Manager__markdown'.underscorify(),
    input: [ meson.source_root() / 'com/ibm/VPD/Manager.interface.yaml',  ],
    output: [ 'Manager.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'com/ibm/VPD/Manager',
    ],
    build_by_default: true,
)

