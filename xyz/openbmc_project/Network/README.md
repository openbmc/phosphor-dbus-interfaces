# Network Management

## Overview

A Network Manager is a daemon which handles network management operations.
It must implement the `xyz.openbmc_project.Network.SystemConfiguration.interface`
and `org.freedesktop.DBus.ObjectManager`.

When the network manager daemon comes up, it should create objects
implementing physical link/virtual interfaces such as
`xyz.openbmc_project.Network.EthernetInterface` or
`xyz.openbmc_project.Network.VLANInterface` on the system.

IP address(v4 and v6) objects must be children objects of the
physical/virtual interface object.

## Interfaces

1. SystemConfiguration: This describes the system specific parameters.
2. EthernetInterface: This describes the interface specific parameters.
3. IP: This describes the ip address specific parameters.
4. IPProtocol: This describes the IP protocol type(IPv4/IPv6).
5. VLANInterface: This describes the VLAN specific properties.
6. Bond: This describes the interface bonding parameters.

# DbusObjects

## Interface Objects

Interface objects can be physical as well as virtual.

If the object is physical interface, it can't be deleted,
but if it is a virtual interface object it can be deleted.

eg: `/xyz/openbmc_project/network/<interfacename>`

## IPAddress Objects

There can be multiple ip address objects under an interface object.
These objects can be deleted by the delete function.

IPv4 object will have the following dbus object path.

eg: `/xyz/openbmc_project/network/<interface>/<ipv4>/<id>/`

IPv6 object will have the following dbus object path.

eg: `/xyz/openbmc_project/network/<interface>/<ipv6>/<id>/`

## Conf Object

This object will have the system configuration related parameters.

eg: `/xyz/openbmc_project/network/conf`
