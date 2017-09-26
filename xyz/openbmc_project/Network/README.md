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

#UseCases

##Configure IP address:

busctl call  xyz.openbmc_project.Network /xyz/openbmc_project/network/<interface> xyz.openbmc_project.Network.IP.Create IP ssys "xyz.openbmc_project.Network.IP.Protocol.IPv4" "<ip>" <subnetmask> "<networkgateway>"

curl -c cjar -b cjar -k -H "Content-Type: application/json" -X  POST -d '{"data":["xyz.openbmc_project.Network.IP.Protocol.IPv4","<ip>",<subnetmask>,"<networkGateway>"]
}' https://<hostname/ip>/xyz/openbmc_project/network/eth0/action/IP

eg

curl -c cjar -b cjar -k -H "Content-Type: application/json" -X  POST -d '{"data":["xyz.openbmc_project.Network.IP.Protocol.IPv4","x.x.x.x",24,"y.y.y.y"]}' https://<hostname/ip>/xyz/openbmc_project/network/eth0/action/IP

##Configure Default Gateway

#Get

busctl get-property xyz.openbmc_project.Network /xyz/openbmc_project/network/config xyz.openbmc_project.Network.SystemConfiguration DefaultGateway

curl -c cjar -b cjar -k -H "Content-Type: application/json" -X  GET https://<hostname/ip>/xyz/openbmc_project/network/config/attr/DefaultGateway

Set
====
busctl set-property xyz.openbmc_project.Network /xyz/openbmc_project/network/config xyz.openbmc_project.Network.SystemConfiguration DefaultGateway s "<DefaultGateway>"

curl -c cjar -b cjar -k -H "Content-Type: application/json" -X  PUT  -d '{"data": "x.x.x.x"}' https://<hostname/ip>/xyz/openbmc_project/network/config/attr/DefaultGateway

NOTE:- Make sure the default gateway should be pingable otherwise you will get
0.0.0.0 as underlying system doesn't allow to configure unpingable gateway address

##Delete IP address:

busctl call xyz.openbmc_project.Network /xyz/openbmc_project/network/<interface>/ipv4/<id> xyz.openbmc_project.Object.Delete Delete

NOTE:- How to get the ipv4/id :- After creating the IP address object enumerate the network interface object.

eg:

curl -c cjar -b cjar -k -H "Content-Type: application/json" -X DELETE https://<hostname/ip>/xyz/openbmc_project/network/eth0/ipv4/fbfc29b

##Configure DHCP:-

#Get

busctl get-property xyz.openbmc_project.Network /xyz/openbmc_project/network/eth0 xyz.openbmc_project.Network.EthernetInterface DHCPEnabled

curl -c cjar -b cjar -k -H "Content-Type: application/json" -X  GET https://<hostname/ip>/xyz/openbmc_project/network/eth0/attr/DHCPEnabled

#Set

busctl set-property xyz.openbmc_project.Network /xyz/openbmc_project/network/eth0 xyz.openbmc_project.Network.EthernetInterface DHCPEnabled b 1

curl -c cjar -b cjar -k -H "Content-Type: application/json" -X  PUT  -d '{"data": 1}' https://<hostname/ip>/xyz/openbmc_project/network/eth0/attr/DHCPEnabled

##Network factory reset

busctl call xyz.openbmc_project.Network /xyz/openbmc_project/network xyz.openbmc_project.Common.FactoryReset Reset

curl -c cjar -b cjar -k -H "Content-Type: application/json" -X POST -d '{"data":[] }' https://<hostname/ip>/xyz/openbmc_project/network/action/Reset

##VLAN via REST:

#Create VLAN

curl -c cjar -b cjar -k -H "Content-Type: application/json" -X POST -d '{"data":["eth0",50] }' https://<hostname/ip>/xyz/openbmc_project/network/action/VLAN

#Delete VLAN:

curl -c cjar -b cjar -k -H "Content-Type: application/json" -X DELETE https://<hostname/ip>/xyz/openbmc_project/network/eth0_50

busctl call xyz.openbmc_project.Network /xyz/openbmc_project/network/eth0_50 xyz.openbmc_project.Object.Delete Delete

#enumerate VLAN:

curl -c cjar -b cjar -k -H "Content-Type: application/json" -X GET https://<hostname/ip>/xyz/openbmc_project/network/eth0_50/enumerate

Configure IP on VLAN:  Please refer the section Configure IP address:

##VLAN & IP commands via IPMI:

#Create

ipmitool -I dbus lan set 1 ipsrc static

ipmitool -I dbus lan set 1 ipaddr <ip>

ipmitool -I dbus lan set 1 netmask <mask>

ipmitool -I dbus lan set 1 defgw ipaddr <ip>

ipmitool -I dbus lan set 1 vlan id <id>

ipmitool -I dbus raw 0x06 0x40

NOTE:- It takes 4-5 sec to create the VLAN and configuration of IP.
If we don't want to creae the VLAN then don't set the vlan id from the above set
of commands.

eg:-
===
ipmitool -I dbus lan set 1 ipsrc static

ipmitool -I dbus lan set 1 ipaddr 10.5.5.5

ipmitool -I dbus lan set 1 netmask 255.255.255.0

ipmitool -I dbus lan set 1 defgw ipaddr 10.5.5.1

ipmitool -I dbus lan set 1 vlan id 50

ipmitool -I dbus raw 0x06 0x40

#Delete the Vlan

ipmitool -I dbus lan set 1 vlan id off

ipmitool -I dbus raw 0x06 0x40  (To save settings)
