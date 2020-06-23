# phosphor-dbus-interfaces
YAML descriptors of standard D-Bus interfaces.
The format is described by the [sdbusplus binding generation tool sdbus++][].

## Building

This project can be built with `meson`.  The typical `meson` workflow is:
`meson builddir && cd builddir && ninja`.

Due to the limited code generation methods available in meson today, changes
to YAML files are not tracked by `meson` and do not automatically cause a new
recompile.  Subsequent runs when making YAML changes will require running
`ninja reconfigure` in order to regenerate the code files from the YAML.

## Configuration

Only the xyz/openbmc_project interfaces are built by default.  Other interfaces
can be enabled by meson options:

- com/ibm - `-Ddata_com_ibm=true`
- org/open_power - `-Ddata_org_open_power=true`

## References

[sdbusplus binding generation tool sdbus++]: https://github.com/openbmc/sdbusplus/blob/master/README.md#binding-generation-tool
