# Generated file; do not modify.
subdir('MemoryECC')
generated_others += custom_target(
    'xyz/openbmc_project/Memory/MemoryECC__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Memory/MemoryECC.errors.yaml', meson.source_root() / 'xyz/openbmc_project/Memory/MemoryECC.interface.yaml',  ],
    output: [ 'MemoryECC.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Memory/MemoryECC',
    ],
    build_by_default: true,
)

