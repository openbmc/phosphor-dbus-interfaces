registry_target = custom_target(
    'registry',
    command: ['cp', '-v', '--parents', '@INPUT@', '@OUTDIR@'],
    output: 'registry.log',
    input: generated_registry,
    capture: true,
    depends: generated_registry,
    build_by_default: should_generate_registry,
)

registry_copy_dir = meson.current_build_dir()
