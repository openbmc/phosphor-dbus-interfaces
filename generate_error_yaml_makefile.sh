#!/bin/sh

cd $1

toplevel_dirs=xyz
all_yaml=`find $toplevel_dirs -name "*errors.yaml"`
echo "nobase_error_yaml_DATA = \\"
for i in ${all_yaml};
do
    echo "	${i} \\"
done
all_meta_yaml=`find $toplevel_dirs -name "*metadata.yaml"`
for i in ${all_meta_yaml};
do
    echo "	${i} \\"
done
echo
