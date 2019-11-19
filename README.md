# phosphor-dbus-interfaces
YAML descriptors of standard dbus interfaces

When building, by default the YAML in `xyz` will be used during code
generation.  This can be changed with the YAML_DIRS configure option:

```
./configure ${CONFIGURE_FLAGS} YAML_DIRS="xyz org/open_power"
```
