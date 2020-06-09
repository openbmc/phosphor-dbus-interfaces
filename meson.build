project('phosphor-dbus-interfaces', 'cpp',
    default_options: [
        'buildtype=debugoptimized',
        'cpp_std=c++17',
        'werror=true',
        'b_lto=true',
    ],
    version: '1.0.0',
)

sdbusplus_dep = dependency('sdbusplus', required: false)
if sdbusplus_dep.found()
    sdbusplusplus_prog = find_program('sdbus++')
    sdbusgen_proj = find_program('sdbus++-gendir')
else
    sdbusplus_proj = subproject('sdbusplus', required: true)
    sdbusplus_dep = sdbusplus_proj.get_variable('sdbusplus_dep')
    sdbusplusplus_prog = sdbusplus_proj.get_variable('sdbusplusplus_prog')
    sdbusgen_prog = sdbusplus_proj.get_variable('sdbusgen_prog')
endif

generated_root = meson.current_build_dir() / 'gen-out'
generated_files = run_command(
        sdbusgen_prog,
        '--tool', sdbusplusplus_prog,
        '--output', generated_root,
        'xyz',
        check: true,
).stdout().strip().split('\n')

libphosphor_dbus = library(
    'phosphor_dbus',
    files(generated_files),
    include_directories: include_directories('gen-out'),
    dependencies: sdbusplus_dep,
    version: meson.project_version(),
    install: true,
)

generated_headers = []
generated_others = []

realpath_prog = find_program('realpath')

foreach f : generated_files
    rel_path = run_command(
        realpath_prog,
        '--relative-to', generated_root,
        f,
    ).stdout().strip().split('\n')[-1]

    if f.endswith('.hpp')
        generated_headers += rel_path
    else
        generated_others += rel_path
    endif
endforeach

install_subdir(
    generated_root,
    exclude_files: generated_others,
    install_dir: get_option('includedir'),
    strip_directory: true,
)

import('pkgconfig').generate(
    libraries: libphosphor_dbus,
    name: meson.project_name(),
    version: meson.project_version(),
    description: 'Generated sdbusplus bindings for phosphor-dbus-interfaces'
)
