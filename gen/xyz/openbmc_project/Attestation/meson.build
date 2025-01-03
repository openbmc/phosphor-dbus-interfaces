# Generated file; do not modify.
subdir('ComponentIntegrity')
subdir('IdentityAuthentication')
subdir('MeasurementSet')

sdbusplus_current_path = 'xyz/openbmc_project/Attestation'

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
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

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
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

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
    install: should_generate_markdown,
    install_dir: [inst_markdown_dir / sdbusplus_current_path],
    build_by_default: should_generate_markdown,
)

