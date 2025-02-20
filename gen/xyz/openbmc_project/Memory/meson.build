# Generated file; do not modify.
subdir('MemoryECC')
subdir('MemoryMetrics')

sdbusplus_current_path = 'xyz/openbmc_project/Memory'

generated_markdown += custom_target(
    'xyz/openbmc_project/Memory/MemoryECC__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Memory/MemoryECC.errors.yaml',
        '../../../../yaml/xyz/openbmc_project/Memory/MemoryECC.interface.yaml',
    ],
    output: ['MemoryECC.md'],
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
        'xyz/openbmc_project/Memory/MemoryECC',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Memory/MemoryMetrics__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Memory/MemoryMetrics.interface.yaml',
    ],
    output: ['MemoryMetrics.md'],
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
        'xyz/openbmc_project/Memory/MemoryMetrics',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

