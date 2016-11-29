sbin_PROGRAMS = phosphor-ledcontroller
AM_CPPFLAGS = -I$(top_srcdir)/../sdbusplus

phosphor_ledcontroller_SOURCES = controller.cpp
phosphor_ledcontroller_LDADD = libcontroller.la

noinst_LTLIBRARIES = libcontroller.la
libcontroller_la_SOURCES = \
	argument.cpp			\
	physical.cpp			\
	xyz.openbmc_project.Led.Physical.cpp

phosphor_ledcontroller_LDFLAGS = $(SYSTEMD_LIBS)
phosphor_ledcontroller_CFLAGS = $(SYSTEMD_CFLAGS)
