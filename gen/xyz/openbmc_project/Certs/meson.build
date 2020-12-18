# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/Certs__cpp'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Certs.errors.yaml',  ],
    output: [ 'error.cpp', 'error.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Certs',
    ],
)

subdir('Authority')
generated_others += custom_target(
    'xyz/openbmc_project/Certs/Authority__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Certs/Authority.interface.yaml',  ],
    output: [ 'Authority.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Certs/Authority',
    ],
    build_by_default: true,
)

subdir('CSR')
generated_others += custom_target(
    'xyz/openbmc_project/Certs/CSR__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Certs/CSR.interface.yaml',  ],
    output: [ 'CSR.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Certs/CSR',
    ],
    build_by_default: true,
)

subdir('Certificate')
generated_others += custom_target(
    'xyz/openbmc_project/Certs/Certificate__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Certs/Certificate.interface.yaml',  ],
    output: [ 'Certificate.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Certs/Certificate',
    ],
    build_by_default: true,
)

subdir('Entry')
generated_others += custom_target(
    'xyz/openbmc_project/Certs/Entry__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Certs/Entry.interface.yaml',  ],
    output: [ 'Entry.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Certs/Entry',
    ],
    build_by_default: true,
)

subdir('Install')
generated_others += custom_target(
    'xyz/openbmc_project/Certs/Install__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Certs/Install.interface.yaml',  ],
    output: [ 'Install.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Certs/Install',
    ],
    build_by_default: true,
)

subdir('Replace')
generated_others += custom_target(
    'xyz/openbmc_project/Certs/Replace__markdown'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/Certs/Replace.interface.yaml',  ],
    output: [ 'Replace.md' ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/Certs/Replace',
    ],
    build_by_default: true,
)

