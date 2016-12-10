#!/bin/sh

cd $1

toplevel_dirs=xyz
interfaces=`find $toplevel_dirs -name "*.interface.yaml"`

for i in ${interfaces};
do
    iface=`echo $i | sed s/\\.interface.yaml// | sed "s/\//./g"`
    cat <<MAKEFILE

${i%.interface.yaml}/server.cpp: ${i} ${i%.interface.yaml}/server.hpp
	@mkdir -p \`dirname \$@\`
	\$(SDBUSPLUSPLUS) -r \$(srcdir) interface server-cpp ${iface} > \$@

${i%.interface.yaml}/server.hpp: ${i}
	@mkdir -p \`dirname \$@\`
	\$(SDBUSPLUSPLUS) -r \$(srcdir) interface server-header ${iface} > \$@

MAKEFILE

done

echo "libphosphor_dbus_cpp_SOURCES = \\"
for i in ${interfaces};
do
    echo "	${i%.interface.yaml}/server.cpp \\"
done
echo

echo "libphosphor_dbus_hpp_SOURCES = \\"
for i in ${interfaces};
do
    echo "	${i%.interface.yaml}/server.hpp \\"
done
echo

cat << MAKEFILE
libphosphor_dbus.cpp: \$(libphosphor_dbus_cpp_SOURCES)
	cat \$^ > \$@

nobase_include_HEADERS = \$(libphosphor_dbus_hpp_SOURCES)

.PHONY: clean-dbus
clean-dbus:
	for i in \$(libphosphor_dbus_cpp_SOURCES) \\
	         \$(libphosphor_dbus_hpp_SOURCES); \\
	do \\
	    test -e \$\$i && rm \$\$i ; \\
	    test -d \`dirname \$\$i\` && rmdir -p \`dirname \$\$i\` ; \\
	    true; \\
	done
MAKEFILE
