                                                NetworkManagement
                                                ==================

Overview
=========
Network Manager is the daemon which handles the network management operations.
It implements the xyz.openbmc_project/network/network.interface and org.freedesktop.DBus.ObjectManager.

when the network manager daemon comes up,it creates the Ethernet DBus objects for physical and virtual interfaces on the system.
The ipaddress(v4 and v6) objects will be a child object of the Ethernet DBus object.

Interfaces
=========

=>NetworkInterface:- This describes the system specific parameters

Methods:-
=========
1/ AddVlan:- Will create the VLAN on the specified interface as a child DBus object which implements the xyz/openbmc_project/Network/ethernet.interface.
eg:- xyz/openbmc_project/Network/eth0:vlanid.

2/ CreateBonding :- This will bind multiple interfaces together and create the bonding interface which implements the xyz/openbmc_project/Network/ethernet.interface.
eg: xyz/openbmc_project/Network/bond0.

3/ RemoveVlan: Removes the vlan from the given interface.

4/ RemoveBonding: Removes the bonding.	

5/ AddNameServer:- This will add the DNS on the system and will be shown as the property of the network interface.

6/ RemoveNameServer:- This will remove the DNS from the system.

=>EthernetInterface:- This describes the interface specific parameters.

Methods:-
========
1/ AddIpAddress:- This will add the IP address details. Internally it creates a child DBus object which implements the xyz/openbmc_project/Network/Ipaddress interface.
eg:- xyz/openbmc_project/Network/eth0/ipv4/1/
     xyz/openbmc_project/Network/eth0/ipv6/1/

2/ RemoveIPaddress:- This will delete the specified IP address for the given interface.

3/ GetIPaddress:- This will retrieve all the IP address details for the given interface.

=>Ipaddress Interface:- This describes the ipaddress specific parameters.
  eg:- ipadddress,perfixlength,gateway,origin of the ip address.


