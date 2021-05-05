## Overview

MCTP D-Bus interfaces will be implemented by the MCTP control process daemon
alias mcptd and aids in the discovery of MCTP enabled devices by application
layer protocols (like PLDM, SPDM) which are implemented in the userspace.
PLDM will rely on the discovery of MCTP D-Bus interfaces to discover MCTP
endpoints. The supported MCTP message types in an endpoint are exposed by the
`SupportedMessageTypes` property in the `xyz.openbmc_project.MCTP.Endpoint`
interface. If the endpoint supports PLDM, then pldm daemon will complete
the PLDM discovery flow with the MCTP endpoint. Also mctpd discovers the removal
of the MCTP endpoints and removes the D-Bus objects corresponding to those
endpoints. MCTP bridges are not modelled in the D-Bus.

### D-Bus object modelling

The root D-Bus object path for the mctpd is `/xyz/openbmc_project/mctp`. There
will be a D-Bus object for every endpoint that is discovered by the mctpd.
The lifetime of the D-Bus object is the lifetime of the connected MCTP device.

Since MCTP network ID is optional, the endpoints without MCTP network ID will be
represented as D-Bus objects named `xyz/openbmc_project/mctp/endpointN`
where N is a unique number and does not correspond to the actual endpoint ID.
The D-Bus object implements the `xyz.openbmc_project.MCTP.Endpoint` interface.
The object may also optionally implement `xyz.openbmc_project.Common.UUID`
interface to address the requirement for devices with multiple endpoints and for
hot-plug devices.

If the endpoint is part of the MCTP network with MCTP network ID then the
endpoint would be represented as D-Bus object
`xyz/openbmc_project/mctp/<MCTP NetworkId>/endpointN`, where MCTP NetworkId
corresponds to the MCTP network this endpoint is  part of and N is a unique
number and does not correspond to the actual endpoint ID. This aids in the
enumeration of the endpoints belonging to a MCTP network. The D-Bus object will
additionally implement the `xyz.openbmc_project.MCTP.Network` interface.
