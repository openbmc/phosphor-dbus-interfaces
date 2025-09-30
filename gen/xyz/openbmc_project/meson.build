# Generated file; do not modify.
subdir('Association')
subdir('Attestation')
subdir('BIOSConfig')
subdir('Certs')
subdir('Channel')
subdir('Chassis')
subdir('Collection')
subdir('Common')
subdir('Condition')
subdir('Configuration')
subdir('Console')
subdir('Control')
subdir('Debug')
subdir('Dump')
subdir('FruDeviceManager')
subdir('HardwareIsolation')
subdir('Inventory')
subdir('Ipmi')
subdir('Led')
subdir('Logging')
subdir('MCTP')
subdir('Memory')
subdir('Metric')
subdir('Network')
subdir('Nvme')
subdir('Object')
subdir('ObjectMapper')
subdir('PFR')
subdir('PLDM')
subdir('ScheduledTime')
subdir('Sensor')
subdir('Smbios')
subdir('Software')
subdir('State')
subdir('Telemetry')
subdir('Time')
subdir('User')
subdir('VirtualMedia')

sdbusplus_current_path = 'xyz/openbmc_project'

generated_markdown += custom_target(
    'xyz/openbmc_project/Association__markdown'.underscorify(),
    input: ['../../../yaml/xyz/openbmc_project/Association.interface.yaml'],
    output: ['Association.md'],
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
        meson.current_source_dir() / '../../../yaml',
        'xyz/openbmc_project/Association',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Certs__markdown'.underscorify(),
    input: ['../../../yaml/xyz/openbmc_project/Certs.errors.yaml'],
    output: ['Certs.md'],
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
        meson.current_source_dir() / '../../../yaml',
        'xyz/openbmc_project/Certs',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Common__markdown'.underscorify(),
    input: ['../../../yaml/xyz/openbmc_project/Common.errors.yaml'],
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
        meson.current_source_dir() / '../../../yaml',
        'xyz/openbmc_project/Common',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/FruDeviceManager__markdown'.underscorify(),
    input: ['../../../yaml/xyz/openbmc_project/FruDeviceManager.interface.yaml'],
    output: ['FruDeviceManager.md'],
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
        meson.current_source_dir() / '../../../yaml',
        'xyz/openbmc_project/FruDeviceManager',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/HardwareIsolation__markdown'.underscorify(),
    input: ['../../../yaml/xyz/openbmc_project/HardwareIsolation.errors.yaml'],
    output: ['HardwareIsolation.md'],
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
        meson.current_source_dir() / '../../../yaml',
        'xyz/openbmc_project/HardwareIsolation',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Inventory__markdown'.underscorify(),
    input: ['../../../yaml/xyz/openbmc_project/Inventory.errors.yaml'],
    output: ['Inventory.md'],
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
        meson.current_source_dir() / '../../../yaml',
        'xyz/openbmc_project/Inventory',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Logging__markdown'.underscorify(),
    input: ['../../../yaml/xyz/openbmc_project/Logging.events.yaml'],
    output: ['Logging.md'],
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
        meson.current_source_dir() / '../../../yaml',
        'xyz/openbmc_project/Logging',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_registry += custom_target(
    'xyz/openbmc_project/Logging__registry'.underscorify(),
    input: ['../../../yaml/xyz/openbmc_project/Logging.events.yaml'],
    output: ['Logging.json'],
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
        meson.current_source_dir() / '../../../yaml',
        'xyz/openbmc_project/Logging',
    ],
    install: should_generate_registry,
    install_dir: [inst_registry_dir / sdbusplus_current_path],
    build_by_default: should_generate_registry,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/ObjectMapper__markdown'.underscorify(),
    input: ['../../../yaml/xyz/openbmc_project/ObjectMapper.interface.yaml'],
    output: ['ObjectMapper.md'],
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
        meson.current_source_dir() / '../../../yaml',
        'xyz/openbmc_project/ObjectMapper',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/ScheduledTime__markdown'.underscorify(),
    input: ['../../../yaml/xyz/openbmc_project/ScheduledTime.errors.yaml'],
    output: ['ScheduledTime.md'],
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
        meson.current_source_dir() / '../../../yaml',
        'xyz/openbmc_project/ScheduledTime',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Sensor__markdown'.underscorify(),
    input: ['../../../yaml/xyz/openbmc_project/Sensor.events.yaml'],
    output: ['Sensor.md'],
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
        meson.current_source_dir() / '../../../yaml',
        'xyz/openbmc_project/Sensor',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_registry += custom_target(
    'xyz/openbmc_project/Sensor__registry'.underscorify(),
    input: ['../../../yaml/xyz/openbmc_project/Sensor.events.yaml'],
    output: ['Sensor.json'],
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
        meson.current_source_dir() / '../../../yaml',
        'xyz/openbmc_project/Sensor',
    ],
    install: should_generate_registry,
    install_dir: [inst_registry_dir / sdbusplus_current_path],
    build_by_default: should_generate_registry,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Time__markdown'.underscorify(),
    input: ['../../../yaml/xyz/openbmc_project/Time.errors.yaml'],
    output: ['Time.md'],
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
        meson.current_source_dir() / '../../../yaml',
        'xyz/openbmc_project/Time',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

