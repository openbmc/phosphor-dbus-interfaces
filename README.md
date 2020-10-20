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

If `regenerate-meson` does not work, do the following from `gen` directory
- run `which sdbus++-gen-meson` and make sure it is referring to a valid `sdbus++-gen-meson`
- run `export SDBUSPP_GEN_MESON=<output of which sdbus++gen-meson>` ; `./regenerate-meson`
- If it fails again, then execute the below command
- `sdbus++-gen-meson --directory .. --command meson --output .`

## Configuration

Only the xyz/openbmc_project interfaces are built by default.  Other interfaces
can be enabled by meson options:

- com/ibm - `-Ddata_com_ibm=true`
- org/open_power - `-Ddata_org_open_power=true`

Example: `meson builddir -Ddata_com_ibm=true && ninja -C builddir`
## References

[sdbusplus binding generation tool sdbus++]: https://github.com/openbmc/sdbusplus/blob/master/README.md#binding-generation-tool
