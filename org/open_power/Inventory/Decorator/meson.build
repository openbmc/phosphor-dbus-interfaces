org_open_power_Inventory_Decorator_Asset_md = []
subdir('Asset')

custom_target(
  'Asset.md',
  output: 'Asset.md',
  input: org_open_power_Inventory_Decorator_Asset_md,
  capture: true,
  command: [cat, '@INPUT@'],
  install: true,
  install_dir: get_option('datadir') / meson.project_name() / 'org/open_power/Inventory/Decorator/Asset.md')
