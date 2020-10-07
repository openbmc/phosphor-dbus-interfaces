project('phosphor-dbus-interfaces', 'cpp',
    meson_version: '>= 0.54.1',
    default_options: [
        'buildtype=debugoptimized',
        'cpp_std=c++17',
        'warning_level=3',
        'werror=true',
    ],
    version: '1.0.0',
)
# meson_version >= 0.54.1 is necessary because that is the first place meson
# generates unique object filenames for two files with the same `basename`.
# Many sdbus++ generated files have `basename` collisions because they are
# named like `.../server.cpp`.  Prior to this version, meson would create a
# ninja recipe for a single `server.o` file.

# Get sdbusplus dependency.
sdbusplus_dep = dependency('sdbusplus', required: false)
if sdbusplus_dep.found()
    sdbusplusplus_prog = find_program('sdbus++')
    sdbuspp_gen_meson_prog = find_program('sdbus++-gen-meson')
else
    sdbusplus_proj = subproject('sdbusplus', required: true)
    sdbusplus_dep = sdbusplus_proj.get_variable('sdbusplus_dep')
    sdbusplusplus_prog = sdbusplus_proj.get_variable('sdbusplusplus_prog')
    sdbuspp_gen_meson_prog = sdbusplus_proj.get_variable(
        'sdbuspp_gen_meson_prog'
    )
endif

realpath_prog = find_program('realpath')

# Parse options to determine appropriate subdirectories to support.
selected_subdirs = []
if get_option('data_com_ibm')
    selected_subdirs += 'com/ibm'
endif
if get_option('data_org_open_power')
    selected_subdirs += 'org/open_power'
endif
if get_option('data_xyz_openbmc_project')
    selected_subdirs += 'xyz/openbmc_project'
endif

# Install the selected YAML files.
foreach d : selected_subdirs
    install_subdir(
        d,
        install_dir: get_option('datadir') / 'phosphor-dbus-yaml/yaml' / d,
        strip_directory: true,
    )
endforeach

# If libphosphor_dbus was not enabled, exit out from here.  We installed
# the YAML which is all we are asked to do.
if not get_option('libphosphor_dbus')
    subdir_done()
endif

generated_root = meson.current_build_dir() / 'gen'
generated_sources = []
generated_others = []
yaml_sources = []

# Source the generated meson files.
subdir('gen')
foreach d : selected_subdirs
  subdir('gen' / d)
endforeach

# Parse through the list from sdbus++-gendir and put into sets.
generated_headers = []
generated_cpp = []
generated_others_files = []

foreach g : generated_sources generated_others
    foreach f : g.to_list()
        rel_path = run_command(
            realpath_prog,
            '--relative-to', generated_root,
            f.full_path(),
        ).stdout().strip().split('\n')[-1]

        if rel_path.endswith('.hpp')
            generated_headers += rel_path
        elif rel_path.endswith('.cpp')
            generated_cpp += rel_path
        else
            generated_others_files += rel_path
        endif
    endforeach
endforeach

# Install the generated header files.
install_subdir(
    generated_root,
    exclude_files: [ generated_cpp, generated_others_files ],
    install_dir: get_option('includedir'),
    strip_directory: true,
)

# Install the generated markdown files.
install_subdir(
    generated_root,
    exclude_files: [ generated_headers, generated_cpp ],
    install_dir: get_option('datadir') / 'doc' / meson.project_name(),
    strip_directory: true,
)

# Define and build libphosphor_dbus.so from the C++ files.
libphosphor_dbus = library(
    'phosphor_dbus',
    generated_sources,
    include_directories: include_directories('gen'),
    dependencies: sdbusplus_dep,
    version: meson.project_version(),
    install: true,
)

import('pkgconfig').generate(
    libraries: libphosphor_dbus,
    name: meson.project_name(),
    version: meson.project_version(),
    description: 'Generated sdbusplus bindings for phosphor-dbus-interfaces'
)
