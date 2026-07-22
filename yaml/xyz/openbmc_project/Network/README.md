# Network Management

## Overview

A Network Manager is a daemon which handles network management operations. It
must implement the `xyz.openbmc_project.Network.SystemConfiguration.interface`
and `org.freedesktop.DBus.ObjectManager`.

When the network manager daemon comes up, it should create objects implementing
physical link/virtual interfaces such as
`xyz.openbmc_project.Network.EthernetInterface` or
`xyz.openbmc_project.Network.VLANInterface` on the system.

IP address(v4 and v6) objects must be children objects of the physical/virtual
interface object.

## Interfaces

1. SystemConfiguration: This describes the system-specific parameters.
2. EthernetInterface: This describes the interface specific parameters.
3. IP: This describes the IP address specific parameters.
4. IPProtocol: This describes the IP protocol type(IPv4/IPv6).
5. VLANInterface: This describes the VLAN specific properties.
6. Bond: This describes the interface bonding parameters.

## D-Bus Objects

### Interface Objects

Interface objects can be physical as well as virtual.

If the object is a physical interface, it can't be deleted, but if it is a
virtual interface object it can be deleted.

E.g. `/xyz/openbmc_project/network/<interfacename>`

### IP Address Objects

There can be multiple IP address objects under an interface object. These
objects can be deleted by the delete function.

IP address objects (both IPv4 and IPv6) reside directly under the interface
object path, with the IP address and prefix length encoded using sdbusplus
path escaping.

Example IPv4: `/xyz/openbmc_project/network/eth0/_3192_2e168_2e1_2e1_2f24`
(for address `192.168.1.1/24`)

Example IPv6: `/xyz/openbmc_project/network/eth0/_32001_3adb8_3a1_3a_3a1_2f64`
(for address `2001:db8:1::1/64`)

Use `busctl tree xyz.openbmc_project.Network` to list all current IP objects.

### Network Configuration Object

The network configuration object will have system configuration parameters:

`/xyz/openbmc_project/network/config`

## Commands

### Create Static IPv4 Address

```sh
busctl call xyz.openbmc_project.Network \
    /xyz/openbmc_project/network/<interface> \
    xyz.openbmc_project.Network.IP.Create \
    IP ssys "xyz.openbmc_project.Network.IP.Protocol.IPv4" \
    "<IP Address>" <Netmask Prefix> "<Network Gateway>"
```

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" -X  POST \
    -d '{
            "data": [
                "xyz.openbmc_project.Network.IP.Protocol.IPv4",
                "<IP Address",
                <Netmask Prefix>,
                "<Network Gateway>"
            ]
        }' \
    https://${bmc}/xyz/openbmc_project/network/<interface>/action/IP
```

E.g.

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" -X POST \
    -d '{
            "data": [
                "xyz.openbmc_project.Network.IP.Protocol.IPv4",
                "8.8.8.8",
                24,
                "8.8.8.0"
            ]
        }' \
    https://${bmc}/xyz/openbmc_project/network/eth0/action/IP
```

Note: After creating the IP address object enumerate the network interface
object to get the exact object path.

### Delete IP Address

```sh
busctl call xyz.openbmc_project.Network \
    /xyz/openbmc_project/network/<interface>/<encoded-ip-prefix> \
    xyz.openbmc_project.Object.Delete Delete
```

NOTE: The path component encodes the IP address and prefix length (e.g.
`192.168.1.1/24` -> `_3192_2e168_2e1_2e1_2f24`). Use
`busctl tree xyz.openbmc_project.Network` to list the exact object paths.

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" -X DELETE \
    https://${bmc}/xyz/openbmc_project/network/<interface>/ipv4/<id>
```

### Default Gateway

#### Get

```sh
busctl get-property xyz.openbmc_project.Network \
    /xyz/openbmc_project/network/<interface> \
    xyz.openbmc_project.Network.EthernetInterface DefaultGateway
```

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" \
    https://${bmc}/xyz/openbmc_project/network/config/attr/DefaultGateway
```

#### Set

```sh
busctl set-property xyz.openbmc_project.Network \
    /xyz/openbmc_project/network/<interface> \
    xyz.openbmc_project.Network.EthernetInterface \
    DefaultGateway s "<DefaultGateway>"
```

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" -X PUT \
    -d '{"data": "<DefaultGateway>"}' \
    https://${bmc}/xyz/openbmc_project/network/config/attr/DefaultGateway
```

NOTE: The default gateway must be pingable, if not 0.0.0.0 will be used.

### HostName

#### Get

```sh
busctl get-property xyz.openbmc_project.Network \
    /xyz/openbmc_project/network/config \
    xyz.openbmc_project.Network.SystemConfiguration HostName
```

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" \
    https://${bmc}/xyz/openbmc_project/network/config/attr/HostName
```

#### Set

```sh
busctl set-property xyz.openbmc_project.Network \
    /xyz/openbmc_project/network/config \
    xyz.openbmc_project.Network.SystemConfiguration HostName s "<HostName>"
```

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" -X PUT \
    -d '{"data": "<HostName>"}' \
    https://${bmc}/xyz/openbmc_project/network/config/attr/HostName
```

### DHCP

#### Get

```sh
busctl get-property xyz.openbmc_project.Network \
    /xyz/openbmc_project/network/<interface> \
    xyz.openbmc_project.Network.EthernetInterface DHCPEnabled
```

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" \
    https://${bmc}/xyz/openbmc_project/network/eth0/attr/DHCPEnabled
```

#### Set

```sh
busctl set-property xyz.openbmc_project.Network \
    /xyz/openbmc_project/network/<interface> \
    xyz.openbmc_project.Network.EthernetInterface DHCPEnabled s \
    "<DHCP State>"
```

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" -X PUT \
    -d '{"data": 1}' \
    https://${bmc}/xyz/openbmc_project/network/eth0/attr/DHCPEnabled
```

### MAC Address

#### Get

```sh
busctl get-property xyz.openbmc_project.Network \
    /xyz/openbmc_project/network/eth0 \
    xyz.openbmc_project.Network.MACAddress MACAddress
```

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" \
    https://${bmc}/xyz/openbmc_project/network/<interface>/attr/MACAddress
```

#### Set

```sh
busctl set-property xyz.openbmc_project.Network \
    /xyz/openbmc_project/network/<interface> \
    xyz.openbmc_project.Network.MACAddress MACAddress s "<MAC Address>"
```

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" -X PUT \
    -d '{"data": "<MAC Address>" }' \
    https://${bmc}/xyz/openbmc_project/network/<interface>/attr/MACAddress
```

NOTE: MAC address should be a local admin MAC (2nd bit of first byte should be
on).

### Network Factory Reset

```sh
busctl call xyz.openbmc_project.Network /xyz/openbmc_project/network \
    xyz.openbmc_project.Common.FactoryReset Reset
```

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" -X POST \
    -d '{"data":[] }' https://${bmc}/xyz/openbmc_project/network/action/Reset
```

### VLAN

#### Create

```sh
busctl call xyz.openbmc_project.Network /xyz/openbmc_project/network \
    xyz.openbmc_project.Network.VLAN.Create VLAN su "<interface>" <VLAN id>
```

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" -X POST \
    -d '{"data":["<interface>", <VLAN id>] }' \
    https://${bmc}/xyz/openbmc_project/network/action/VLAN
```

E.g.

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" -X POST \
    -d '{"data":["eth0",50] }' \
    https://${bmc}/xyz/openbmc_project/network/action/VLAN
```

#### Delete

```sh
busctl call xyz.openbmc_project.Network \
    /xyz/openbmc_project/network/<VLAN interface> \
    xyz.openbmc_project.Object.Delete Delete
```

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" -X DELETE \
    https://${bmc}/xyz/openbmc_project/network/<VLAN interface>
```

E.g.

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" -X DELETE \
    https://${bmc}/xyz/openbmc_project/network/eth0_50
```

#### Enumerate

```sh
curl -c cjar -b cjar -k -H "Content-Type: application/json" \
    https://${bmc}/xyz/openbmc_project/network/<VLAN interface>/enumerate
```

### IPMI VLAN and IP

#### Create

```sh
ipmitool -I dbus lan set 1 ipsrc static

ipmitool -I dbus lan set 1 ipaddr <IP address>

ipmitool -I dbus lan set 1 netmask <mask>

ipmitool -I dbus lan set 1 defgw ipaddr <IP address>

ipmitool -I dbus lan set 1 vlan id <id>

ipmitool -I dbus raw 0x06 0x40 // To the save settings
```

NOTE: It takes 4-5 seconds to create the VLAN and configure the IP. If a VLAN
interface is not desired don't set the VLAN id above.

#### Delete

```sh
ipmitool -I dbus lan set 1 vlan id off

ipmitool -I dbus raw 0x06 0x40 // To the save settings
```
