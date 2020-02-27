# MCTP Daemon

## Overview
MCTP service exposes D-Bus methods / properties / signals for managing
MCTP devices or work as MCTP End Point. MCTP daemon will either
work in Bus Owner or End Point mode for the specified physical medium.

### MCTP service
MCTP service can be started either in Bus Owner mode or Endpoit mode.
It will  will expose 1. Base object and 2. MCTP Endpoints found in the 
physical medium. Please refer individual yaml file for details about the
methods / signals / properties exposed in the interfaces.

#### Base object
Exposed under the path `/xyz/openbmc_project/mctp` with the following
interfaces.
1. `xyz.openbmc_project.MCTP.Base` which exposes all the common properties
needed for MCTP Daemon.
2. `xyz.openbmc_project.MCTP.BusOwner` available only in Bus Owner mode
which exposes the properties needed by Bus Owner MCTP Daemon.
3. `xyz.openbmc_project.MCTP.SupportedTypes` which exposes the types supported
by this MCTP Daemon
4. Binding interface `xyz.openbmc_project.MCTP.Binding.PCIe` or
`xyz.openbmc_project.MCTP.Binding.SMBus` as per the physical medium in which
this MCTP Daemon is instantiated.

#### Endpoint object - Discovered by MCTP Daemon
Exposed under the path `/xyz/openbmc_project/mctp/endpoints/<eid>` with the
following interfaces.
1. `xyz.openbmc_project.MCTP.SupportedMessageTypes` which exposes supported MCTP
message types for the discovered MCTP Endpoint.
2. `xyz.openbmc_project.MCTP.Endpoint` which exposes properties like EIDs,
DeviceUUID, etc. for the discovered MCTP Endpoint.

