# MCTP Daemon

## Overview
MCTP service exposes D-Bus methods / properties / signals for managing
MCTP devices or work as MCTP End Point. MCTP daemon will either
work in Bus Owner or End Point mode for the specified physical medium.

### MCTP as Bus Owner
MCTP service when started as Bus Owner mode, will expose 1. Base object
and 2. MCTP Devices found in the physical medium. Please refer individual
yaml file for details about the methods / signals / properties exposed in
the interfaces.

#### Base object
Exposed under the path `/xyz/openbmc_project/mctp` with the following
interfaces.
1. `xyz.openbmc_project.MCTP.Base` which exposes all the common properties
needed for MCTP Daemon.
2. `xyz.openbmc_project.MCTP.BusOwner` which exposes the properties needed
by Bus Owner MCTP Daemon.
3. `xyz.openbmc_project.MCTP.SupportedTypes` which exposes the types supported
by this MCTP Daemon
4. Binding interface `xyz.openbmc_project.MCTP.Binding.PCie` or
`xyz.openbmc_project.MCTP.Binding.SMBus` as per the physical medium in which
this MCTP Daemon is instantiated.

#### Device object - Discovered by MCTP Daemon
Exposed under the path `/xyz/openbmc_project/mctp/devices/eid` with the
following interfaces.
1. `xyz.openbmc_project.MCTP.SupportedTypes` which exposes the types supported
by this newly discovered MCTP Device.
2. `xyz.openbmc_project.MCTP.Device` which exposes properties like EID, UUID,
etc. for the discovered MCTP Device.

### MCTP as End Point
MCTP service when started in End Point mode, will expose only one object
as per the physical medium. Please refer individual yaml file for details about
the methods / signals / properties exposed in the interfaces.

Exposed under the path `/xyz/openbmc_project/mctp` with the following
interfaces.
1. `xyz.openbmc_project.MCTP.Base` which exposes all the common properties
needed for MCTP Daemon.
2. `xyz.openbmc_project.MCTP.EndPoint` which exposes the properties needed
for End Point mode MCTP Daemon.
3. `xyz.openbmc_project.MCTP.SupportedTypes` which exposes the supported types
of this MCTP Daemon
4. Binding interface `xyz.openbmc_project.MCTP.Binding.PCie` or
`xyz.openbmc_project.MCTP.Binding.SMBus` as per the physical medium in which
this MCTP Daemon is instantiated.
