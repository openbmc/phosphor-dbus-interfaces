_sdbusplus_xyz_openbmc_project_Software_Activation_md = []
_sdbusplus_xyz_openbmc_project_Software_ApplyTime_md = []
_sdbusplus_xyz_openbmc_project_Software_ActivationProgress_md = []
_sdbusplus_xyz_openbmc_project_Software_ActivationBlocksTransition_md = []
_sdbusplus_xyz_openbmc_project_Software_Version_md = []
_sdbusplus_xyz_openbmc_project_Software_ApplyOptions_md = []
_sdbusplus_xyz_openbmc_project_Software_ExtendedVersion_md = []
_sdbusplus_xyz_openbmc_project_Software_RequestedRedundancyPriority_md = []
_sdbusplus_xyz_openbmc_project_Software_RedundancyPriority_md = []
subdir('ApplyTime')
subdir('Activation')
subdir('RequestedRedundancyPriority')
subdir('RedundancyPriority')
subdir('Version')
subdir('ApplyOptions')
subdir('ExtendedVersion')
subdir('ActivationBlocksTransition')
subdir('ActivationProgress')

custom_target(
  'Activation.md',
  output: 'Activation.md',
  input: _sdbusplus_xyz_openbmc_project_Software_Activation_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Software/Activation.md')

custom_target(
  'ApplyTime.md',
  output: 'ApplyTime.md',
  input: _sdbusplus_xyz_openbmc_project_Software_ApplyTime_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Software/ApplyTime.md')

custom_target(
  'ActivationProgress.md',
  output: 'ActivationProgress.md',
  input: _sdbusplus_xyz_openbmc_project_Software_ActivationProgress_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Software/ActivationProgress.md')

custom_target(
  'ActivationBlocksTransition.md',
  output: 'ActivationBlocksTransition.md',
  input: _sdbusplus_xyz_openbmc_project_Software_ActivationBlocksTransition_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Software/ActivationBlocksTransition.md')

custom_target(
  'Version.md',
  output: 'Version.md',
  input: _sdbusplus_xyz_openbmc_project_Software_Version_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Software/Version.md')

custom_target(
  'ApplyOptions.md',
  output: 'ApplyOptions.md',
  input: _sdbusplus_xyz_openbmc_project_Software_ApplyOptions_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Software/ApplyOptions.md')

custom_target(
  'ExtendedVersion.md',
  output: 'ExtendedVersion.md',
  input: _sdbusplus_xyz_openbmc_project_Software_ExtendedVersion_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Software/ExtendedVersion.md')

custom_target(
  'RequestedRedundancyPriority.md',
  output: 'RequestedRedundancyPriority.md',
  input: _sdbusplus_xyz_openbmc_project_Software_RequestedRedundancyPriority_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Software/RequestedRedundancyPriority.md')

custom_target(
  'RedundancyPriority.md',
  output: 'RedundancyPriority.md',
  input: _sdbusplus_xyz_openbmc_project_Software_RedundancyPriority_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'xyz/openbmc_project/Software/RedundancyPriority.md')
