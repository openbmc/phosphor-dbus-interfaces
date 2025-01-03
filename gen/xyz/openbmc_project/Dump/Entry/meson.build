# Generated file; do not modify.
subdir('BMC')
subdir('FaultLog')
subdir('NIC')
subdir('System')

sdbusplus_current_path = 'xyz/openbmc_project/Dump/Entry'

generated_sources += custom_target(
    'xyz/openbmc_project/Dump/Entry__cpp'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Dump/Entry.interface.yaml',
    ],
    output: [
        'common.hpp',
        'server.hpp',
        'server.cpp',
        'aserver.hpp',
        'client.hpp',
    ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Dump/Entry',
    ],
    install: should_generate_cpp,
    install_dir: [
        get_option('includedir') / sdbusplus_current_path,
        get_option('includedir') / sdbusplus_current_path,
        false,
        get_option('includedir') / sdbusplus_current_path,
        get_option('includedir') / sdbusplus_current_path,
    ],
    build_by_default: should_generate_cpp,
)

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
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

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
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Dump/Entry/NIC__markdown'.underscorify(),
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
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

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
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

