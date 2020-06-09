project('phosphor-dbus-interfaces', 'cpp',
    default_options: [
        'buildtype=debugoptimized',
        'cpp_std=c++17',
        'werror=true',
        'b_lto=true',
    ],
    version: '1.0.0',
)

# Get sdbusplus dependency.
sdbusplus_dep = dependency('sdbusplus', required: false)
if sdbusplus_dep.found()
    sdbusplusplus_prog = find_program('sdbus++')
    sdbusgen_prog = find_program('sdbus++-gendir')
else
    sdbusplus_proj = subproject('sdbusplus', required: true)
    sdbusplus_dep = sdbusplus_proj.get_variable('sdbusplus_dep')
    sdbusplusplus_prog = sdbusplus_proj.get_variable('sdbusplusplus_prog')
    sdbusgen_prog = sdbusplus_proj.get_variable('sdbusgen_prog')
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

# Generate all the sdbus++ files from the selected subdirectories.
generated_root = meson.current_build_dir() / 'gen-out'
generated_files = run_command(
        sdbusgen_prog,
        '--list-all',
        '--tool', sdbusplusplus_prog,
        '--output', generated_root,
        selected_subdirs,
        check: true,
).stdout().strip().split('\n')

# Parse through the list from sdbus++-gendir and put into sets.
generated_headers = []
generated_cpp = []
generated_cpp_fullpath = []
generated_others = []

foreach f : generated_files
    rel_path = run_command(
        realpath_prog,
        '--relative-to', generated_root,
        f,
    ).stdout().strip().split('\n')[-1]

    if f.endswith('.hpp')
        generated_headers += rel_path
    elif f.endswith('.cpp')
        generated_cpp += rel_path
        generated_cpp_fullpath += f
    else
        generated_others += rel_path
    endif
endforeach

# Install the generated header files.
install_subdir(
    generated_root,
    exclude_files: [ generated_cpp, generated_others ],
    install_dir: get_option('includedir'),
    strip_directory: true,
)

# Install the generated markdown files.
install_subdir(
    generated_root,
    exclude_files: [ generated_headers, generated_cpp ],
    install_dir: get_option('datadir') / meson.project_name(),
    strip_directory: true,
)

# Define and build libphosphor_dbus.so from the C++ files.
libphosphor_dbus = library(
    'phosphor_dbus',
    files(generated_cpp_fullpath),
    include_directories: include_directories('gen-out'),
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
