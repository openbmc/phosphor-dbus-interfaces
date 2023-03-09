project('phosphor-dbus-interfaces', 'cpp',
    meson_version: '>= 0.58.0',
    default_options: [
        'buildtype=debugoptimized',
        'cpp_std=c++20',
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
    sdbusplusplus_depfiles = subproject('sdbusplus').get_variable('sdbusplusplus_depfiles')
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
inst_yaml_dir = get_option('datadir') / 'phosphor-dbus-yaml/yaml'
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
generated_others = []
yaml_sources = []

# Source the generated meson files.
subdir('gen')
foreach d : selected_subdirs
  subdir('gen' / d)
endforeach
custom_target(
    'md',
    command: 'true',
    output: 'md',
    capture: true,
    depends: generated_others,
    build_by_default: get_option('generate_md'))

generated_files_headers = []
generated_files_cpp = []
foreach s : generated_sources
    foreach f : s.to_list()
        p = f.full_path()
        if p.endswith('.hpp')
            generated_files_headers += f
        elif p.endswith('.cpp')
            generated_files_cpp += f
        else
            error('Unknown filetype: ' + p)
        endif
    endforeach
endforeach

generated_root = meson.current_build_dir() / 'gen/'
exclude_cpp = []
foreach f : generated_files_cpp
    exclude_cpp += f.full_path().replace(generated_root, '').strip('/')
endforeach

# Install the generated header files.
exclude = exclude_cpp
foreach o : generated_others
    foreach f : o.to_list()
        exclude += f.full_path().replace(generated_root, '').strip('/')
    endforeach
endforeach
install_subdir(
    generated_root,
    exclude_files: exclude,
    install_dir: get_option('includedir'),
    strip_directory: true,
)

# Install the generated markdown files.
exclude = exclude_cpp
foreach f : generated_files_headers
    exclude += f.full_path().replace(generated_root, '').strip('/')
endforeach
install_subdir(
    generated_root,
    exclude_files: exclude,
    install_dir: get_option('datadir') / 'doc' / meson.project_name(),
    strip_directory: true,
)

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
    variables: ['yamldir=' + '${pc_sysrootdir}${prefix}' / inst_yaml_dir],
)

phosphor_dbus_interfaces_dep = declare_dependency(
    sources: generated_files_headers,
    include_directories: include_directories('gen'),
    link_with: libphosphor_dbus,
    dependencies: sdbusplus_dep,
    variables: ['yamldir=' + meson.project_source_root() / 'yaml'],
)

meson.override_dependency('phosphor-dbus-interfaces', phosphor_dbus_interfaces_dep)
