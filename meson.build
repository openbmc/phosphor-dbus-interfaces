project('phosphor-dbus-interfaces', 'cpp',
    meson_version: '>= 0.53.2',
    default_options: [
        'cpp_std=c++17',
        'werror=true',
    ],
    version: '1.0.0',
)

# Get sdbusplus dependency.
sdbusplus_dep = dependency('sdbusplus', required: false)
sdbusplusplus_prog = find_program('sdbus++', required: false)
if not sdbusplus_dep.found() or not sdbusplusplus_prog.found()
    sdbusplus_proj = subproject('sdbusplus')
    sdbusplus_dep = sdbusplus_proj.get_variable('sdbusplus_dep')
    sdbusplusplus_prog = sdbusplus_proj.get_variable('sdbusplusplus_prog')
endif

generated_sources = []
phosphor_dbus_root = meson.current_source_dir()
cat_prog = find_program('cat')

if get_option('data_com_ibm')
  subdir('com/ibm')
  generated_sources += sources_com_ibm
endif
if get_option('data_org_open_power')
  subdir('org/open_power')
  generated_sources += sources_org_open_power
endif
if get_option('data_xyz_openbmc_project')
  subdir('xyz/openbmc_project')
  generated_sources += sources_xyz_openbmc_project
endif

phosphor_dbus_inc = include_directories('.')

phosphor_dbus_deps = [
    sdbusplus_dep,
]

# Define and build libphosphor_dbus.so from the C++ files.
libphosphor_dbus = library(
    'phosphor_dbus',
    generated_sources,
    include_directories: phosphor_dbus_inc,
    dependencies: phosphor_dbus_deps,
    version: meson.project_version(),
    install: true,
)

phosphor_dbus_dep = declare_dependency(
    link_with: libphosphor_dbus,
    include_directories: phosphor_dbus_inc,
    dependencies: sdbusplus_dep,
)

phosphor_dbus_reqs = []
foreach dep : phosphor_dbus_deps
    if dep.type_name() == 'pkgconfig'
        phosphor_dbus_reqs += dep
    endif
endforeach

import('pkgconfig').generate(
    libraries: phosphor_dbus_dep,
    requires: phosphor_dbus_reqs,
    name: meson.project_name(),
    version: meson.project_version(),
    description: 'Generated sdbusplus bindings for phosphor-dbus-interfaces'
)
