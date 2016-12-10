# Initialization
AC_PREREQ([2.69])
AC_INIT([phosphor-dbus-interfaces], [1.0], [https://github.com/openbmc/phosphor-dbus-interfaces])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([subdir-objects -Wall -Werror foreign dist-xz])
AM_SILENT_RULES([yes])
AC_LANG([C++])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AM_PROG_AR
AC_PROG_INSTALL
AC_PROG_MAKE_SET

AC_PATH_PROG([SDBUSPLUSPLUS], [sdbus++])
AS_IF([test "x$SDBUSPLUSPLUS" == "x"],
    AC_MSG_ERROR([Cannot find sdbus++]))

# Checks for libraries.
PKG_CHECK_MODULES([SYSTEMD], [libsystemd >= 221])

# Checks for typedefs, structures, and compiler characteristics.
AX_CXX_COMPILE_STDCXX_14([noext])
AX_APPEND_COMPILE_FLAGS([-Wall -Werror], [CFLAGS])
AX_APPEND_COMPILE_FLAGS([-Wall -Werror], [CXXFLAGS])

# Checks for header files.
AC_CHECK_HEADER(sdbusplus/server.hpp, ,[AC_MSG_ERROR([Could not find sdbusplus/server.hpp...sdbusplus package required])])
AC_CHECK_HEADER(systemd/sd-bus.h, ,[AC_MSG_ERROR([Could not find systemd/sd-bus.h...systemd developement package required])])

# Checks for library functions.
LT_INIT([dlopen disable-static shared])
LT_LIB_DLLOAD

# Create configured output
AC_CONFIG_FILES([Makefile.interfaces],[${srcdir}/generate_makefile.sh ${srcdir} > Makefile.interfaces])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
