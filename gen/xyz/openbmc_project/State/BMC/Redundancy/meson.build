# Generated file; do not modify.
subdir('Sibling')

sdbusplus_current_path = 'xyz/openbmc_project/State/BMC/Redundancy'

generated_sources += custom_target(
    'xyz/openbmc_project/State/BMC/Redundancy__cpp'.underscorify(),
    input: [
        '../../../../../../yaml/xyz/openbmc_project/State/BMC/Redundancy.interface.yaml',
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
        sdbuspp_gen_meson_prog,
        '--command',
        'cpp',
        '--output',
        meson.current_build_dir(),
        '--tool',
        sdbusplusplus_prog,
        '--directory',
        meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/State/BMC/Redundancy',
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

generated_markdown += custom_target(
    'xyz/openbmc_project/State/BMC/Redundancy/Sibling__markdown'.underscorify(),
    input: [ '../../../../../../yaml/xyz/openbmc_project/State/BMC/Redundancy/Sibling.interface.yaml',  ],
    output: [ 'Sibling.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../../yaml',
        'xyz/openbmc_project/State/BMC/Redundancy/Sibling',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

