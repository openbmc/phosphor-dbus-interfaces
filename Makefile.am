AM_DEFAULT_SOURCE_EXT = .cpp

nobase_include_HEADERS = ## These get filled in by Makefile.interfaces

libphosphor_dbusdir = ${libdir}
libphosphor_dbus_LTLIBRARIES = libphosphor_dbus.la
libphosphor_dbus_la_LDFLAGS = $(SYSTEMD_LIBS) -version-info 0:0:0 -shared
libphosphor_dbus_la_CXXFLAGS = $(SYSTEMD_CFLAGS)

BUILT_SOURCES = libphosphor_dbus.cpp
CLEANFILES = libphosphor_dbus.cpp

pkgconfiglibdir = ${libdir}/pkgconfig
pkgconfiglib_DATA = phosphor-dbus-interfaces.pc

clean-local: clean-dbus

-include Makefile.interfaces

