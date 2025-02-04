# Generated file; do not modify.
subdir('Common')
subdir('Manager')
subdir('Password')
subdir('SecureBoot')

sdbusplus_current_path = 'xyz/openbmc_project/BIOSConfig'

generated_markdown += custom_target(
    'xyz/openbmc_project/BIOSConfig/Common__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/BIOSConfig/Common.errors.yaml',
    ],
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
        'xyz/openbmc_project/BIOSConfig/Common',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/BIOSConfig/Manager__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/BIOSConfig/Manager.interface.yaml',
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
        'xyz/openbmc_project/BIOSConfig/Manager',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/BIOSConfig/Password__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/BIOSConfig/Password.interface.yaml',
    ],
    output: ['Password.md'],
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
        'xyz/openbmc_project/BIOSConfig/Password',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/BIOSConfig/SecureBoot__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/BIOSConfig/SecureBoot.interface.yaml',
    ],
    output: ['SecureBoot.md'],
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
        'xyz/openbmc_project/BIOSConfig/SecureBoot',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)
