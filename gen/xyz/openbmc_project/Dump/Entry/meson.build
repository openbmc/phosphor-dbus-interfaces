# Generated file; do not modify.
subdir('BMC')
generated_others += custom_target(
    'xyz/openbmc_project/Dump/Entry/BMC__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Dump/Entry/BMC.interface.yaml',  ],
    output: [ 'BMC.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Dump/Entry/BMC',
    ],
    build_by_default: true,
)

generated_sources += custom_target(
    'xyz/openbmc_project/Dump/Entry__cpp'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Dump/Entry.interface.yaml',  ],
    output: [ 'server.cpp', 'server.hpp', 'client.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Dump/Entry',
    ],
)

subdir('System')
generated_others += custom_target(
    'xyz/openbmc_project/Dump/Entry/System__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Dump/Entry/System.interface.yaml',  ],
    output: [ 'System.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Dump/Entry/System',
    ],
    build_by_default: true,
)

