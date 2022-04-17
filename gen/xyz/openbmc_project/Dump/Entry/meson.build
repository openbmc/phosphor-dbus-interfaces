# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Dump/Entry__cpp'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Dump/Entry.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Dump/Entry',
    ],
)

subdir('BMC')
generated_others += custom_target(
    'xyz/openbmc_project/Dump/Entry/BMC__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Dump/Entry/BMC.interface.yaml',  ],
    output: [ 'BMC.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Dump/Entry/BMC',
    ],
)

subdir('FaultLog')
generated_others += custom_target(
    'xyz/openbmc_project/Dump/Entry/FaultLog__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Dump/Entry/FaultLog.interface.yaml',  ],
    output: [ 'FaultLog.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Dump/Entry/FaultLog',
    ],
)

subdir('System')
generated_others += custom_target(
    'xyz/openbmc_project/Dump/Entry/System__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Dump/Entry/System.interface.yaml',  ],
    output: [ 'System.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Dump/Entry/System',
    ],
)

