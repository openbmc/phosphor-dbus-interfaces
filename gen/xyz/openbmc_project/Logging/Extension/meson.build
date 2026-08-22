# Generated file; do not modify.
subdir('CPERProcessed')
subdir('CPERRaw')

sdbusplus_current_path = 'xyz/openbmc_project/Logging/Extension'

generated_markdown += custom_target(
    'xyz/openbmc_project/Logging/Extension/CPERProcessed__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Logging/Extension/CPERProcessed.interface.yaml',
    ],
    output: ['CPERProcessed.md'],
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
        'xyz/openbmc_project/Logging/Extension/CPERProcessed',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Logging/Extension/CPERRaw__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Logging/Extension/CPERRaw.interface.yaml',
    ],
    output: ['CPERRaw.md'],
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
        'xyz/openbmc_project/Logging/Extension/CPERRaw',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

