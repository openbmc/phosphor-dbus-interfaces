# Generated file; do not modify.
subdir('BMC')
subdir('BMCRedundancy')
subdir('Boot')
subdir('Cable')
subdir('Chassis')
subdir('Decorator')
subdir('Drive')
subdir('Host')
subdir('Leak')
subdir('OperatingSystem')
subdir('PowerOnHours')
subdir('SMC')
subdir('ScheduledHostTransition')
subdir('Shutdown')
subdir('SystemdTarget')
subdir('Watchdog')

sdbusplus_current_path = 'xyz/openbmc_project/State'

generated_markdown += custom_target(
    'xyz/openbmc_project/State/BMC__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/State/BMC.errors.yaml', '../../../../yaml/xyz/openbmc_project/State/BMC.interface.yaml',  ],
    output: [ 'BMC.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/State/BMC',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/BMCRedundancy__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/State/BMCRedundancy.interface.yaml',  ],
    output: [ 'BMCRedundancy.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/State/BMCRedundancy',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Cable__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/State/Cable.events.yaml',  ],
    output: [ 'Cable.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/State/Cable',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_registry += custom_target(
    'xyz/openbmc_project/State/Cable__registry'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/State/Cable.events.yaml',  ],
    output: [ 'Cable.json' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'registry',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/State/Cable',
    ],
    install: should_generate_registry,
    install_dir: [inst_registry_dir / sdbusplus_current_path],
    build_by_default: should_generate_registry,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Chassis__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/State/Chassis.errors.yaml', '../../../../yaml/xyz/openbmc_project/State/Chassis.interface.yaml',  ],
    output: [ 'Chassis.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/State/Chassis',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Drive__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/State/Drive.interface.yaml',  ],
    output: [ 'Drive.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/State/Drive',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Host__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/State/Host.errors.yaml', '../../../../yaml/xyz/openbmc_project/State/Host.interface.yaml',  ],
    output: [ 'Host.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/State/Host',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/PowerOnHours__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/State/PowerOnHours.interface.yaml',  ],
    output: [ 'PowerOnHours.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/State/PowerOnHours',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/SMC__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/State/SMC.events.yaml',  ],
    output: [ 'SMC.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/State/SMC',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_registry += custom_target(
    'xyz/openbmc_project/State/SMC__registry'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/State/SMC.events.yaml',  ],
    output: [ 'SMC.json' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'registry',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/State/SMC',
    ],
    install: should_generate_registry,
    install_dir: [inst_registry_dir / sdbusplus_current_path],
    build_by_default: should_generate_registry,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/ScheduledHostTransition__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/State/ScheduledHostTransition.interface.yaml',  ],
    output: [ 'ScheduledHostTransition.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/State/ScheduledHostTransition',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/SystemdTarget__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/State/SystemdTarget.errors.yaml',  ],
    output: [ 'SystemdTarget.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/State/SystemdTarget',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

generated_markdown += custom_target(
    'xyz/openbmc_project/State/Watchdog__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/State/Watchdog.interface.yaml',  ],
    output: [ 'Watchdog.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/State/Watchdog',
    ],
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

