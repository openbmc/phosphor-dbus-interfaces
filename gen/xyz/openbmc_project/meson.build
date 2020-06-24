# Generated file; do not modify.
subdir('Inventory')
subdir('Sensor')
subdir('Object')
subdir('Certs')
subdir('Software')
subdir('Control')
subdir('State')
subdir('Dump')
subdir('User')
subdir('Network')
subdir('Common')
subdir('Smbios')
subdir('Chassis')
subdir('Association')
generated_others += custom_target(
    'xyz/openbmc_project/Association__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Association.interface.yaml',  ],
    output: [ 'Association.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Association',
    ],
    build_by_default: true,
)

subdir('Ipmi')
subdir('Logging')
subdir('PFR')
generated_others += custom_target(
    'xyz/openbmc_project/Common__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Common.errors.yaml',  ],
    output: [ 'Common.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Common',
    ],
    build_by_default: true,
)

subdir('VirtualMedia')
subdir('Memory')
subdir('Time')
generated_others += custom_target(
    'xyz/openbmc_project/Time__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Time.errors.yaml',  ],
    output: [ 'Time.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Time',
    ],
    build_by_default: true,
)

generated_others += custom_target(
    'xyz/openbmc_project/Inventory__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Inventory.errors.yaml',  ],
    output: [ 'Inventory.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Inventory',
    ],
    build_by_default: true,
)

subdir('Led')
subdir('Collection')
subdir('Nvme')
subdir('ObjectMapper')
generated_others += custom_target(
    'xyz/openbmc_project/ObjectMapper__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/ObjectMapper.interface.yaml',  ],
    output: [ 'ObjectMapper.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/ObjectMapper',
    ],
    build_by_default: true,
)

subdir('Channel')
subdir('ScheduledTime')
generated_others += custom_target(
    'xyz/openbmc_project/ScheduledTime__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/ScheduledTime.errors.yaml',  ],
    output: [ 'ScheduledTime.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/ScheduledTime',
    ],
    build_by_default: true,
)

subdir('PLDM')
generated_others += custom_target(
    'xyz/openbmc_project/Certs__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Certs.errors.yaml',  ],
    output: [ 'Certs.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Certs',
    ],
    build_by_default: true,
)

