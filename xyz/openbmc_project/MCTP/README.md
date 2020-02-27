# MCTP Daemon

## Overview
MCTP service exposes D-Bus methods / properties / signals for managing
MCTP devices or work as MCTP End Point. MCTP daemon will either
work in Bus Owner or End Point mode for the specified physical medium.

### MCTP service
MCTP service can be started either in Bus Owner mode or Endpoint mode.
It will expose following objects.
1. Base object
2. MCTP Endpoints (discovered in case of Bus Owner mode, queried using
routing table in case of Endpoint mode)
Please refer individual yaml file for details about the
methods / signals / properties exposed in the interfaces.

#### Base object
Exposed under the path `/xyz/openbmc_project/mctp` with the following
interfaces.
1. `xyz.openbmc_project.MCTP.Base` which exposes all the common properties
needed for MCTP Daemon.
2. `xyz.openbmc_project.MCTP.BusOwner` available only in Bus Owner mode
which exposes the properties needed by Bus Owner MCTP Daemon.
3. `xyz.openbmc_project.MCTP.SupportedMessageTypes` which exposes the message
types supported.
4. Binding interface `xyz.openbmc_project.MCTP.Binding.PCIe` or
`xyz.openbmc_project.MCTP.Binding.SMBus` as per the physical medium in which
this MCTP Daemon is instantiated.

#### Endpoint object
Exposed under the path `/xyz/openbmc_project/mctp/device/<eid>` with the
following interfaces.
1. `xyz.openbmc_project.MCTP.SupportedMessageTypes` which exposes supported MCTP
message types for the discovered MCTP Endpoint.
2. `xyz.openbmc_project.MCTP.Enpoint` which exposes properties like UUID and endpoint
mode (to identify Bus Owner or Bridge or Endpoint) for the discovered MCTP Endpoint.
3. `xyz.openbmc_project.MCTP.Bridge` available only for discovered MCTP Bridges to
expose properties like EID pool. (TBD)
