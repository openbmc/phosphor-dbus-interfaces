# Generated file; do not modify.
subdir('Detector')
subdir('DetectorGroup')

sdbusplus_current_path = 'xyz/openbmc_project/State/Leak'

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Leak/Detector__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/State/Leak/Detector.events.yaml',
        '../../../../../yaml/xyz/openbmc_project/State/Leak/Detector.interface.yaml',
    ],
    output: ['Detector.md'],
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
        'xyz/openbmc_project/State/Leak/Detector',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_registry += custom_target(
    'xyz/openbmc_project/State/Leak/Detector__registry'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/State/Leak/Detector.events.yaml',
    ],
    output: ['Detector.json'],
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
        'xyz/openbmc_project/State/Leak/Detector',
    ],
    install: should_generate_registry,
    install_dir: [inst_registry_dir / sdbusplus_current_path],
    build_by_default: should_generate_registry,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Leak/DetectorGroup__markdown'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/State/Leak/DetectorGroup.events.yaml',
        '../../../../../yaml/xyz/openbmc_project/State/Leak/DetectorGroup.interface.yaml',
    ],
    output: ['DetectorGroup.md'],
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
        'xyz/openbmc_project/State/Leak/DetectorGroup',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_registry += custom_target(
    'xyz/openbmc_project/State/Leak/DetectorGroup__registry'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/State/Leak/DetectorGroup.events.yaml',
    ],
    output: ['DetectorGroup.json'],
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
        'xyz/openbmc_project/State/Leak/DetectorGroup',
    ],
    install: should_generate_registry,
    install_dir: [inst_registry_dir / sdbusplus_current_path],
    build_by_default: should_generate_registry,
)

