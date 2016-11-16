# Generate this header, don't export in a distro
nodist_include_HEADERS = elog-gen.hpp

# Be sure to build elog-gen.hpp before compiling
BUILT_SOURCES = elog-gen.hpp

CLEANFILES=elog-gen.hpp

# TODO - The mako and python file come from phosphor-logging repo, need
#        to get those in our paths here
ELOG_YAML ?= ${abs_srcdir}/xyz/openbmc_project/Common.errors.yaml
ELOG_MAKO ?= elog-gen-template.mako.hpp
REQ_FILES_TO_GEN ?= elog-gen.py $(ELOG_YAML) $(ELOG_MAKO)

# Be sure to package up the required script, yaml, and mako template to
# generate the header file
EXTRA_DIST = $(REQ_FILES_TO_GEN)

elog-gen.hpp: $(REQ_FILES_TO_GEN)
	$(AM_V_at)elog-gen.py -e $(ELOG_YAML) -m $(ELOG_MAKO) -o ${abs_srcdir}/elog-gen.hpp