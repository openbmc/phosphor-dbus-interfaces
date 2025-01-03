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
selected_subdirs = []
if get_option('data_com_google')
    selected_subdirs += 'com/google'
endif
if get_option('data_com_ibm')
    selected_subdirs += 'com/ibm'
endif
if get_option('data_com_intel')
    selected_subdirs += 'com/intel'
endif
if get_option('data_com_meta')
    selected_subdirs += 'com/meta'
endif
if get_option('data_org_freedesktop')
    selected_subdirs += 'org/freedesktop'
endif
if get_option('data_org_open_power')
    selected_subdirs += 'org/open_power'
endif
if get_option('data_xyz_openbmc_project')
    selected_subdirs += 'xyz/openbmc_project'
endif

# Install the selected YAML files.
inst_yaml_dir = get_option('datadir') / 'phosphor-dbus-yaml'
foreach d : selected_subdirs
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

generated_sources = []
generated_markdown = []
generated_registry = []

should_generate_cpp = true
should_generate_markdown = get_option('generate_md')
should_generate_registry = true

# Source the generated meson files.
subdir('gen')
foreach d : selected_subdirs
    subdir('gen' / d)
endforeach

generated_files_headers = []
foreach s : generated_sources
    foreach f : s.to_list()
        if f.full_path().endswith('.hpp')
            generated_files_headers += f
        endif
    endforeach
endforeach

# Copy the registry files into a single tree for use when as a subproject.
subdir('gen/registry')

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
        'registry_dir=' + '${pc_sysrootdir}${prefix}' / inst_registry_dir,
    ],
)

phosphor_dbus_interfaces_dep = declare_dependency(
    sources: generated_files_headers,
    include_directories: include_directories('gen'),
    link_with: libphosphor_dbus,
    dependencies: sdbusplus_dep,
    variables: [
        'yamldir=' + meson.project_source_root() / 'yaml',
        'registry_dir=' + registry_copy_dir,
    ],
)

meson.override_dependency(
    'phosphor-dbus-interfaces',
    phosphor_dbus_interfaces_dep,
)
