# Generated file; do not modify.
subdir('Button')
subdir('HostSelector')
subdir('ID')
subdir('NMI')
subdir('Power')
subdir('Reset')

sdbusplus_current_path = 'xyz/openbmc_project/Chassis/Buttons'

generated_markdown += custom_target(
    'xyz/openbmc_project/Chassis/Buttons/Button__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Chassis/Buttons/Button.events.yaml',
        '../../../../../yaml/xyz/openbmc_project/Chassis/Buttons/Button.interface.yaml',
    ],
    output: ['Button.md'],
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
        'xyz/openbmc_project/Chassis/Buttons/Button',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Chassis/Buttons/HostSelector__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Chassis/Buttons/HostSelector.interface.yaml',
    ],
    output: ['HostSelector.md'],
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
        'xyz/openbmc_project/Chassis/Buttons/HostSelector',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Chassis/Buttons/ID__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Chassis/Buttons/ID.interface.yaml',
    ],
    output: ['ID.md'],
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
        'xyz/openbmc_project/Chassis/Buttons/ID',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Chassis/Buttons/NMI__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Chassis/Buttons/NMI.interface.yaml',
    ],
    output: ['NMI.md'],
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
        'xyz/openbmc_project/Chassis/Buttons/NMI',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Chassis/Buttons/Power__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Chassis/Buttons/Power.interface.yaml',
    ],
    output: ['Power.md'],
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
        'xyz/openbmc_project/Chassis/Buttons/Power',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Chassis/Buttons/Reset__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Chassis/Buttons/Reset.interface.yaml',
    ],
    output: ['Reset.md'],
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
        'xyz/openbmc_project/Chassis/Buttons/Reset',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_registry += custom_target(
    'xyz/openbmc_project/Chassis/Buttons/Button__registry'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Chassis/Buttons/Button.events.yaml',
    ],
    output: ['Button.json'],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog,
        '--command',
        'registry',
        '--output',
        meson.current_build_dir(),
        '--tool',
        sdbusplusplus_prog,
        '--directory',
        meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Chassis/Buttons/Button',
    ],
    install: should_generate_registry,
    install_dir: [inst_registry_dir / sdbusplus_current_path],
    build_by_default: should_generate_registry,
)

