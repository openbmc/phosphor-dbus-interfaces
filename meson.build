project(
    'phosphor-dbus-interfaces',
    'cpp',
    meson_version: '>=1.1.1',
    default_options: [
        'buildtype=debugoptimized',
        'cpp_std=c++23',
        'warning_level=3',
        'werror=true',
        'generate_md=' + (meson.is_subproject() ? 'false' : 'true'),
    ],
    version: '1.0.0',
)

sdbusplus_dep = dependency('sdbusplus')
sdbusplusplus_prog = find_program('sdbus++', native: true)
sdbuspp_gen_meson_prog = find_program('sdbus++-gen-meson', native: true)
sdbusplusplus_depfiles = files()
if sdbusplus_dep.type_name() == 'internal'
    sdbusplusplus_depfiles = subproject('sdbusplus').get_variable(
        'sdbusplusplus_depfiles',
    )
endif

# Parse options to determine appropriate subdirectories to support.
yaml_selected_subdirs = []
if get_option('data_com_google')
    yaml_selected_subdirs += 'com/google'
endif
if get_option('data_com_ibm')
    yaml_selected_subdirs += 'com/ibm'
endif
if get_option('data_com_intel')
    yaml_selected_subdirs += 'com/intel'
endif
if get_option('data_com_meta')
    yaml_selected_subdirs += 'com/meta'
endif
if get_option('data_org_freedesktop')
    yaml_selected_subdirs += 'org/freedesktop'
endif
if get_option('data_org_open_power')
    yaml_selected_subdirs += 'org/open_power'
endif
if get_option('data_xyz_openbmc_project')
    yaml_selected_subdirs += 'xyz/openbmc_project'
endif

# Install the selected YAML files.
inst_yaml_dir = get_option('datadir') / 'phosphor-dbus-yaml'
foreach d : yaml_selected_subdirs
    install_subdir(
        'yaml' / d,
        install_dir: inst_yaml_dir / d,
        strip_directory: true,
    )
endforeach

# If libphosphor_dbus was not enabled, exit out from here.  We installed
# the YAML which is all we are asked to do.
if not get_option('libphosphor_dbus')
    subdir_done()
endif

should_generate_cpp = true
should_generate_markdown = get_option('generate_md')
should_generate_registry = true

# Source the generated meson files.
subdir('gen')

# Source the extra target to copy registry files into a separate tree so they
# can be useful for dependees when we are built as a sub-project.
subdir('registry')

phosphor_dbus_interfaces_deps = [sdbusplus_dep]

registry_target_dep = declare_dependency(
  sources: registry_target
)
phosphor_dbus_interfaces_deps += registry_target_dep

# Define and build libphosphor_dbus.so from the C++ files.
libphosphor_dbus = library(
    'phosphor_dbus',
    generated_sources,
    implicit_include_directories: false,
    include_directories: include_directories('gen'),
    dependencies: sdbusplus_dep,
    version: meson.project_version(),
    install: true,
)

import('pkgconfig').generate(
    libphosphor_dbus,
    name: meson.project_name(),
    version: meson.project_version(),
    description: 'Generated sdbusplus bindings for phosphor-dbus-interfaces',
    variables: [
        'yamldir=' + '${pc_sysrootdir}${prefix}' / inst_yaml_dir,
        'registry_dir=' + '${prefix}' / inst_registry_dir,
    ],
)

phosphor_dbus_interfaces_dep = declare_dependency(
    sources: generated_headers,
    include_directories: include_directories('gen'),
    link_with: libphosphor_dbus,
    dependencies: phosphor_dbus_interfaces_deps,
    variables: [
        'yamldir=' + meson.project_source_root() / 'yaml',
        'registry_dir=' + registry_copy_dir,
    ],
)

meson.override_dependency(
    'phosphor-dbus-interfaces',
    phosphor_dbus_interfaces_dep,
)
