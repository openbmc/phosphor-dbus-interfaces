# Generated file; do not modify.
subdir('Availability')
subdir('OperationalStatus')
subdir('Position')
subdir('PowerState')
subdir('PowerSystemInputs')

sdbusplus_current_path = 'xyz/openbmc_project/State/Decorator'

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Decorator/Availability__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/State/Decorator/Availability.interface.yaml',
    ],
    output: ['Availability.md'],
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
        'xyz/openbmc_project/State/Decorator/Availability',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Decorator/OperationalStatus__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/State/Decorator/OperationalStatus.interface.yaml',
    ],
    output: ['OperationalStatus.md'],
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
        'xyz/openbmc_project/State/Decorator/OperationalStatus',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Decorator/Position__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/State/Decorator/Position.interface.yaml',
    ],
    output: ['Position.md'],
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
        'xyz/openbmc_project/State/Decorator/Position',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Decorator/PowerState__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/State/Decorator/PowerState.interface.yaml',
    ],
    output: ['PowerState.md'],
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
        'xyz/openbmc_project/State/Decorator/PowerState',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Decorator/PowerSystemInputs__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/State/Decorator/PowerSystemInputs.interface.yaml',
    ],
    output: ['PowerSystemInputs.md'],
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
        'xyz/openbmc_project/State/Decorator/PowerSystemInputs',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

