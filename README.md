# phosphor-dbus-interfaces
YAML descriptors of standard D-Bus interfaces.
The format is described by the [sdbusplus binding generation tool sdbus++][].

Only the xyz/openbmc_project interfaces are built by default.  Other interfaces
can be enabled by meson options:

- com/ibm - `-Ddata_com_ibm=true`
- org/open_power - `-Ddata_org_open_power=true`


[sdbusplus binding generation tool sdbus++]: https://github.com/openbmc/sdbusplus/blob/master/README.md#binding-generation-tool
