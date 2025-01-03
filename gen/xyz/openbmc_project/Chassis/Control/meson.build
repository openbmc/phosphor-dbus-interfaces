# Generated file; do not modify.
subdir('NMISource')
subdir('Power')

sdbusplus_current_path = 'xyz/openbmc_project/Chassis/Control'

generated_others += custom_target(
    'xyz/openbmc_project/Chassis/Control/NMISource__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Chassis/Control/NMISource.interface.yaml',  ],
    output: [ 'NMISource.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Chassis/Control/NMISource',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Chassis/Control/Power__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Chassis/Control/Power.interface.yaml',  ],
    output: [ 'Power.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Chassis/Control/Power',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

