# Generated file; do not modify.
subdir('Common')
subdir('Device')
subdir('Manager')

sdbusplus_current_path = 'xyz/openbmc_project/RDE'

generated_markdown += custom_target(
    'xyz/openbmc_project/RDE/Common__markdown'.underscorify(),
    input: ['../../../../yaml/xyz/openbmc_project/RDE/Common.interface.yaml'],
    output: ['Common.md'],
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
        meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/RDE/Common',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/RDE/Device__markdown'.underscorify(),
    input: ['../../../../yaml/xyz/openbmc_project/RDE/Device.interface.yaml'],
    output: ['Device.md'],
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
        meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/RDE/Device',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/RDE/Manager__markdown'.underscorify(),
    input: ['../../../../yaml/xyz/openbmc_project/RDE/Manager.interface.yaml'],
    output: ['Manager.md'],
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
        meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/RDE/Manager',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

