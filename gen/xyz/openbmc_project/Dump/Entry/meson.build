# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Dump/Entry__cpp'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Dump/Entry.interface.yaml',  ],
    output: [ 'common.hpp', 'server.cpp', 'server.hpp', 'aserver.hpp', 'client.hpp',  ],
    depend_files: sdbusplusplus_depfiles,
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
    depend_files: sdbusplusplus_depfiles,
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
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Dump/Entry/FaultLog',
    ],
)

subdir('NIC')
generated_others += custom_target(
    'xyz/openbmc_project/Dump/Entry/NIO__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Dump/Entry/NIC.interface.yaml',  ],
    output: [ 'NIC.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Dump/Entry/NIC',
    ],
)

subdir('System')
generated_others += custom_target(
    'xyz/openbmc_project/Dump/Entry/System__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Dump/Entry/System.interface.yaml',  ],
    output: [ 'System.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Dump/Entry/System',
    ],
)

