# Generated file; do not modify.
subdir('MemoryECC')
generated_others += custom_target(
    'xyz/openbmc_project/Memory/MemoryECC__markdown'.underscorify(),
    input: [ '../../../../xyz/openbmc_project/Memory/MemoryECC.interface.yaml',  ],
    output: [ 'MemoryECC.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../..',
        'xyz/openbmc_project/Memory/MemoryECC',
    ],
)

