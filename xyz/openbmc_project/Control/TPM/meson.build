xyz_openbmc_project_Control_TPM_Policy_md = []
subdir('Policy')

custom_target(
  'Policy.md',
  output: 'Policy.md',
  input: xyz_openbmc_project_Control_TPM_Policy_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Control/TPM/Policy.md')
