# Overview

MCTP D-Bus interfaces are implemented by the MCTP control process daemon alias
mcptd and aids in the discovery of MCTP enabled devices by application layer
protocols (like PLDM, SPDM) which are implemented in the userspace. Application
layer protocols will rely on the discovery of
`xyz.openbmc_project.MCTP.Endpoint` D-Bus interface to discover MCTP endpoints.
The supported MCTP message types in an endpoint are exposed by the
`SupportedMessageTypes` property in the `xyz.openbmc_project.MCTP.Endpoint`
interface. For example, if the endpoint supports PLDM then pldm daemon will
complete the PLDM discovery flow with the MCTP endpoint. Also mctpd discovers
the removal of the MCTP endpoints and removes the D-Bus objects corresponding to
those endpoints. MCTP bridges are not modelled in the D-Bus.

## D-Bus object modelling

The root D-Bus object path for the mctpd is `/xyz/openbmc_project/mctp`. There
will be a D-Bus object for every endpoint that is discovered by the mctpd. The
lifetime of the D-Bus object is the lifetime of the connected MCTP device.

The D-Bus object path for MCTP endpoints are named
`xyz/openbmc_project/mctp/<NetworkId>/<EID>` where NetworkId is the locally
defined [network identfier][1] the endpoint is part of and EID is the endpoint
ID. This aids in the enumeration of the endpoints belonging to an MCTP network.
The D-Bus object implements the `xyz.openbmc_project.MCTP.Endpoint` interface.
The object may also optionally implement `xyz.openbmc_project.Common.UUID`
interface to address the requirement for devices with multiple endpoints and for
hot-plug devices.

An MCTP Network may provide an optional MCTP Network ID that can be used to
differentiate different MCTP Networks when more than one MCTP Network can be
accessed by an entity . The Network ID is also used when an entity has more than
one point of access to the MCTP Network. The MCTP Network ID enables the entity
to tell whether the access points provide access to the same MCTP Network or to
different MCTP Networks. If the implementation supports the optional MCTP
network ID then it is exposed on the D-Bus. The D-Bus object path is
`xyz/openbmc_project/mctp/<NetworkId>` where NetworkId is the locally defined
[network identfier][1] and implements the `xyz.openbmc_project.Common.UUID`
interface and the UUID property is the MCTP network ID.

[1]:
  https://github.com/openbmc/docs/blob/master/designs/mctp/mctp-kernel.md#addressing
