# Generated file; do not modify.
subdir('ComponentIntegrity')
generated_others += custom_target(
    'xyz/openbmc_project/Attestation/ComponentIntegrity__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Attestation/ComponentIntegrity.interface.yaml',  ],
    output: [ 'ComponentIntegrity.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Attestation/ComponentIntegrity',
    ],
)

subdir('IdentityAuthentication')
generated_others += custom_target(
    'xyz/openbmc_project/Attestation/IdentityAuthentication__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Attestation/IdentityAuthentication.interface.yaml',  ],
    output: [ 'IdentityAuthentication.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Attestation/IdentityAuthentication',
    ],
)

subdir('MeasurementSet')
generated_others += custom_target(
    'xyz/openbmc_project/Attestation/MeasurementSet__markdown'.underscorify(),
    input: [ '../../../../yaml/xyz/openbmc_project/Attestation/MeasurementSet.interface.yaml',  ],
    output: [ 'MeasurementSet.md' ],
    depend_files: sdbusplusplus_depfiles,
    command: [
        sdbuspp_gen_meson_prog, '--command', 'markdown',
        '--output', meson.current_build_dir(),
        '--tool', sdbusplusplus_prog,
        '--directory', meson.current_source_dir() / '../../../../yaml',
        'xyz/openbmc_project/Attestation/MeasurementSet',
    ],
)

