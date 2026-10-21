# Generated file; do not modify.
subdir('Event')
subdir('Types')

sdbusplus_current_path = 'xyz/openbmc_project/CXL/CCI'

generated_sources += custom_target(
    'xyz/openbmc_project/CXL/CCI__cpp'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/CXL/CCI.events.yaml',
    ],
    output: [
        'event.cpp',
        'event.hpp',
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
        meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/CXL/CCI',
    ],
    install: should_generate_cpp,
    install_dir: [
        false,
        get_option('includedir') / sdbusplus_current_path,
    ],
    build_by_default: should_generate_cpp,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/CXL/CCI/Event__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/CXL/CCI/Event.interface.yaml',
    ],
    output: ['Event.md'],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog,
        '--command',
        'markdown',
        '--output',
        meson.current_build_dir(),
        '--tool',
        sdbusplusplus_prog,
        '--directory',
        meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/CXL/CCI/Event',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/CXL/CCI/Types__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/CXL/CCI/Types.interface.yaml',
    ],
    output: ['Types.md'],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog,
        '--command',
        'markdown',
        '--output',
        meson.current_build_dir(),
        '--tool',
        sdbusplusplus_prog,
        '--directory',
        meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/CXL/CCI/Types',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

