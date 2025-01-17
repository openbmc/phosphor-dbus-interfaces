# Generated file; do not modify.
subdir('Connector')
subdir('Decorator')
subdir('Item')
subdir('Manager')
subdir('Source')

sdbusplus_current_path = 'xyz/openbmc_project/Inventory'

generated_sources += custom_target(
    'xyz/openbmc_project/Inventory__cpp'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Inventory.errors.yaml',
        '../../../../yaml/xyz/openbmc_project/Inventory.events.yaml',
    ],
    output: ['error.cpp', 'error.hpp', 'event.cpp', 'event.hpp'],
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
        meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Inventory',
    ],
    install: should_generate_cpp,
    install_dir: [
        false,
        get_option('includedir') / sdbusplus_current_path,
        false,
        get_option('includedir') / sdbusplus_current_path,
    ],
    build_by_default: should_generate_cpp,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Inventory/Item__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Inventory/Item.interface.yaml',
    ],
    output: ['Item.md'],
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
        'xyz/openbmc_project/Inventory/Item',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Inventory/Manager__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Inventory/Manager.interface.yaml',
    ],
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
        'xyz/openbmc_project/Inventory/Manager',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

