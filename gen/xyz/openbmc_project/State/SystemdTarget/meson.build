# Generated file; do not modify.
generated_sources += custom_target(
    'xyz/openbmc_project/State/SystemdTarget__cpp'.underscorify(),
    input: [ meson.source_root() / 'xyz/openbmc_project/State/SystemdTarget.errors.yaml',  ],
    output: [ 'error.cpp', 'error.hpp',  ],
    command: [
        sdbuspp_gen_meson_prog, '--command', 'cpp',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.source_root(),
        'xyz/openbmc_project/State/SystemdTarget',
    ],
)

