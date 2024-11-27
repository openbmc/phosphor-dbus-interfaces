# Generated file; do not modify.
generated_sources += custom_target(
    'com/ibm/VPD__cpp'.underscorify(),
    input: [ '../../../../yaml/com/ibm/VPD.errors.yaml',  ],
    output: [ 'error.cpp', 'error.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/ibm/VPD',
    ],
)

subdir('Collection')
generated_others += custom_target(
    'com/ibm/VPD/Collection__markdown'.underscorify(),
    input: [ '../../../../yaml/com/ibm/VPD/Collection.interface.yaml',  ],
    output: [ 'Collection.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/ibm/VPD/Collection',
    ],
)

subdir('FRUManager')
generated_others += custom_target(
    'com/ibm/VPD/FRUManager__markdown'.underscorify(),
    input: [ '../../../../yaml/com/ibm/VPD/FRUManager.interface.yaml',  ],
    output: [ 'FRUManager.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/ibm/VPD/FRUManager',
    ],
)

subdir('Manager')
generated_others += custom_target(
    'com/ibm/VPD/Manager__markdown'.underscorify(),
    input: [ '../../../../yaml/com/ibm/VPD/Manager.interface.yaml',  ],
    output: [ 'Manager.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'com/ibm/VPD/Manager',
    ],
)

