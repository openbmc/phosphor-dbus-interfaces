# phosphor-dbus-interfaces
YAML descriptors of standard D-Bus interfaces.
The format is described by the [sdbusplus binding generation tool sdbus++][].

## Building

This project can be built with `meson`.  The typical `meson` workflow is:
`meson builddir && ninja -C builddir`.

The meson files used to handle the YAML files are automatically generated
and found under the `gen` subdirectory.  When adding or removing YAML files,
this must be regenerated.  This can be done with the helper script found
in the `gen` subdirectory: `cd gen && ./regenerate-meson`.

## Configuration

Only the xyz/openbmc_project interfaces are built by default.  Other interfaces
can be enabled by meson options:

- com/ibm - `-Ddata_com_ibm=true`
- org/open_power - `-Ddata_org_open_power=true`

Example: `meson builddir -Ddata_com_ibm=true && ninja -C builddir`
## References

[sdbusplus binding generation tool sdbus++]: https://github.com/openbmc/sdbusplus/blob/master/README.md#binding-generation-tool
