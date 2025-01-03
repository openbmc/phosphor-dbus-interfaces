# Generated file; do not modify.
subdir('Accelerator')
subdir('Battery')
subdir('Bmc')
subdir('Board')
subdir('Cable')
subdir('Chassis')
subdir('Connector')
subdir('Cpu')
subdir('CpuCore')
subdir('Dimm')
subdir('DiskBackplane')
subdir('Drive')
subdir('Ethernet')
subdir('FabricAdapter')
subdir('Fan')
subdir('Global')
subdir('NetworkInterface')
subdir('PCIeDevice')
subdir('PCIeSlot')
subdir('PCIeSwitch')
subdir('Panel')
subdir('PersistentMemory')
subdir('PowerSupply')
subdir('Rotor')
subdir('Storage')
subdir('StorageController')
subdir('System')
subdir('Tpm')
subdir('TrustedComponent')
subdir('Volume')
subdir('Vrm')

sdbusplus_current_path = 'xyz/openbmc_project/Inventory/Item'

generated_sources += custom_target(
    'xyz/openbmc_project/Inventory/Item__cpp'.underscorify(),
    input: [
        '../../../../../yaml/xyz/openbmc_project/Inventory/Item.interface.yaml',
    ],
    output: [
        'common.hpp',
        'server.hpp',
        'server.cpp',
        'aserver.hpp',
        'client.hpp',
    ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item',
    ],
    install: should_generate_cpp,
    install_dir: [
        get_option('includedir') / sdbusplus_current_path,
        get_option('includedir') / sdbusplus_current_path,
        false,
        get_option('includedir') / sdbusplus_current_path,
        get_option('includedir') / sdbusplus_current_path,
    ],
    build_by_default: should_generate_cpp,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Accelerator__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Accelerator.interface.yaml',  ],
    output: [ 'Accelerator.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Accelerator',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Battery__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Battery.interface.yaml',  ],
    output: [ 'Battery.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Battery',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Bmc__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Bmc.interface.yaml',  ],
    output: [ 'Bmc.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Bmc',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Board__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Board.interface.yaml',  ],
    output: [ 'Board.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Board',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Cable__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Cable.interface.yaml',  ],
    output: [ 'Cable.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Cable',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Chassis__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Chassis.interface.yaml',  ],
    output: [ 'Chassis.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Chassis',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Connector__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Connector.interface.yaml',  ],
    output: [ 'Connector.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Connector',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Cpu__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Cpu.interface.yaml',  ],
    output: [ 'Cpu.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Cpu',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/CpuCore__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/CpuCore.interface.yaml',  ],
    output: [ 'CpuCore.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/CpuCore',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Dimm__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Dimm.interface.yaml',  ],
    output: [ 'Dimm.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Dimm',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/DiskBackplane__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/DiskBackplane.interface.yaml',  ],
    output: [ 'DiskBackplane.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/DiskBackplane',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Drive__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Drive.interface.yaml',  ],
    output: [ 'Drive.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Drive',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Ethernet__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Ethernet.interface.yaml',  ],
    output: [ 'Ethernet.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Ethernet',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/FabricAdapter__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/FabricAdapter.interface.yaml',  ],
    output: [ 'FabricAdapter.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/FabricAdapter',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Fan__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Fan.interface.yaml',  ],
    output: [ 'Fan.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Fan',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Global__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Global.interface.yaml',  ],
    output: [ 'Global.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Global',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/NetworkInterface__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/NetworkInterface.interface.yaml',  ],
    output: [ 'NetworkInterface.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/NetworkInterface',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/PCIeDevice__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/PCIeDevice.interface.yaml',  ],
    output: [ 'PCIeDevice.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/PCIeDevice',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/PCIeSlot__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/PCIeSlot.interface.yaml',  ],
    output: [ 'PCIeSlot.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/PCIeSlot',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/PCIeSwitch__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/PCIeSwitch.interface.yaml',  ],
    output: [ 'PCIeSwitch.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/PCIeSwitch',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Panel__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Panel.interface.yaml',  ],
    output: [ 'Panel.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Panel',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/PersistentMemory__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/PersistentMemory.interface.yaml',  ],
    output: [ 'PersistentMemory.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/PersistentMemory',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/PowerSupply__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/PowerSupply.interface.yaml',  ],
    output: [ 'PowerSupply.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/PowerSupply',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Rotor__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Rotor.interface.yaml',  ],
    output: [ 'Rotor.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Rotor',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Storage__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Storage.interface.yaml',  ],
    output: [ 'Storage.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Storage',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/StorageController__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/StorageController.interface.yaml',  ],
    output: [ 'StorageController.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/StorageController',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/System__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/System.interface.yaml',  ],
    output: [ 'System.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/System',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Tpm__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Tpm.interface.yaml',  ],
    output: [ 'Tpm.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Tpm',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/TrustedComponent__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/TrustedComponent.interface.yaml',  ],
    output: [ 'TrustedComponent.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/TrustedComponent',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Volume__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Volume.interface.yaml',  ],
    output: [ 'Volume.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Volume',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory/Item/Vrm__markdown'.underscorify(),
    input: [ '../../../../../yaml/xyz/openbmc_project/Inventory/Item/Vrm.interface.yaml',  ],
    output: [ 'Vrm.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../../yaml',
        'xyz/openbmc_project/Inventory/Item/Vrm',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

