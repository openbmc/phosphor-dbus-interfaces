# Generated file; do not modify.
subdir('Collection')
subdir('Local')
subdir('MediaConfig')
subdir('Proxy')
subdir('Remote')
subdir('Service')
subdir('Slot')

sdbusplus_current_path = 'xyz/openbmc_project/VirtualMedia'

generated_markdown += custom_target(
    'xyz/openbmc_project/VirtualMedia/Collection__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/VirtualMedia/Collection.interface.yaml',
    ],
    output: ['Collection.md'],
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
        'xyz/openbmc_project/VirtualMedia/Collection',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/VirtualMedia/Local__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/VirtualMedia/Local.interface.yaml',
    ],
    output: ['Local.md'],
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
        'xyz/openbmc_project/VirtualMedia/Local',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/VirtualMedia/MediaConfig__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/VirtualMedia/MediaConfig.interface.yaml',
    ],
    output: ['MediaConfig.md'],
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
        'xyz/openbmc_project/VirtualMedia/MediaConfig',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/VirtualMedia/Proxy__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/VirtualMedia/Proxy.interface.yaml',
    ],
    output: ['Proxy.md'],
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
        'xyz/openbmc_project/VirtualMedia/Proxy',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/VirtualMedia/Remote__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/VirtualMedia/Remote.interface.yaml',
    ],
    output: ['Remote.md'],
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
        'xyz/openbmc_project/VirtualMedia/Remote',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/VirtualMedia/Service__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/VirtualMedia/Service.events.yaml',
    ],
    output: ['Service.md'],
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
        'xyz/openbmc_project/VirtualMedia/Service',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_registry += custom_target(
    'xyz/openbmc_project/VirtualMedia/Service__registry'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/VirtualMedia/Service.events.yaml',
    ],
    output: ['Service.json'],
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
        meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/VirtualMedia/Service',
    ],
    install: should_generate_registry,
    install_dir: [inst_registry_dir / sdbusplus_current_path],
    build_by_default: should_generate_registry,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/VirtualMedia/Slot__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/VirtualMedia/Slot.events.yaml',
        '../../../../yaml/xyz/openbmc_project/VirtualMedia/Slot.interface.yaml',
    ],
    output: ['Slot.md'],
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
        'xyz/openbmc_project/VirtualMedia/Slot',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_registry += custom_target(
    'xyz/openbmc_project/VirtualMedia/Slot__registry'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/VirtualMedia/Slot.events.yaml',
    ],
    output: ['Slot.json'],
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
        meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/VirtualMedia/Slot',
    ],
    install: should_generate_registry,
    install_dir: [inst_registry_dir / sdbusplus_current_path],
    build_by_default: should_generate_registry,
)

