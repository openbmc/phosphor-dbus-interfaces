# Generated file; do not modify.
subdir('GPIODeviceDetect')
subdir('GPIOLeakDetector')
subdir('GPIOValve')
subdir('ModbusRTUDetect')
subdir('USBPort')

sdbusplus_current_path = 'xyz/openbmc_project/Configuration'

generated_markdown += custom_target(
    'xyz/openbmc_project/Configuration/GPIODeviceDetect__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Configuration/GPIODeviceDetect.interface.yaml',
    ],
    output: ['GPIODeviceDetect.md'],
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
        'xyz/openbmc_project/Configuration/GPIODeviceDetect',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Configuration/GPIOLeakDetector__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Configuration/GPIOLeakDetector.interface.yaml',
    ],
    output: ['GPIOLeakDetector.md'],
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
        'xyz/openbmc_project/Configuration/GPIOLeakDetector',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Configuration/GPIOValve__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Configuration/GPIOValve.interface.yaml',
    ],
    output: ['GPIOValve.md'],
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
        'xyz/openbmc_project/Configuration/GPIOValve',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Configuration/ModbusRTUDetect__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Configuration/ModbusRTUDetect.interface.yaml',
    ],
    output: ['ModbusRTUDetect.md'],
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
        'xyz/openbmc_project/Configuration/ModbusRTUDetect',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Configuration/USBPort__markdown'.underscorify(),
    input: [
        '../../../../yaml/xyz/openbmc_project/Configuration/USBPort.interface.yaml',
    ],
    output: ['USBPort.md'],
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
        'xyz/openbmc_project/Configuration/USBPort',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

