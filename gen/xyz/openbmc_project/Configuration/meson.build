# Generated file; do not modify.
subdir('ModbusDevice')
subdir('ModbusDeviceDetect')

sdbusplus_current_path = 'xyz/openbmc_project/Configuration'

generated_markdown += custom_target(
    'xyz/openbmc_project/Configuration/ModbusDevice__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Configuration/ModbusDevice.interface.yaml',  ],
    output: [ 'ModbusDevice.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Configuration/ModbusDevice',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/Configuration/ModbusDeviceDetect__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Configuration/ModbusDeviceDetect.interface.yaml',  ],
    output: [ 'ModbusDeviceDetect.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Configuration/ModbusDeviceDetect',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

