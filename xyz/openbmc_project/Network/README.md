                                 NetworkManagement
                                 =================
Overview
=========
Network Manager is the daemon which handles the network management operations.
It implements the xyz.openbmc_project.network.SystemConfiguration.interface
and org.freedesktop.DBus.ObjectManager.

when the network manager daemon comes up,it creates the Ethernet DBus objects
for physical and virtual interfaces on the system.
IP address(v4 and v6) objects will be children objects of the
Ethernet DBus object.

Interfaces
==========

1. SystemConfiguration: This describes the system specific parameters.
2. EthernetInterface: This describes the interface specific parameters.
3. IPAddress: This describes the ipaddress specific parameters.

SystemConfiguration:

Methods
=======
1. AddVLAN: Will create the VLAN on the specified interface as a child DBus object
   which implements the xyz/openbmc_project/Network/EthernetInterface.interface.
   eg: xyz/openbmc_project/Network/eth0.vlanid.

2. CreateBonding: This will bind multiple interfaces together and create the 
   bonding interface which implements the xyz/openbmc_project/Network/ethernet.interface.
   eg: xyz/openbmc_project/Network/bond0.

3. RemoveInterface: Removes the interface(Ethernet/Virtual) from the system.	

4. AddNameserver: This will add the DNS on the system
   and will be shown as the property of the network interface.

5. RemoveNameserver: This will remove the DNS from the system.

EthernetInterface:

Methods
=======
1. AddIPAddress: This will add the IP address details.
   Internally it creates a child DBus object which implements the 
   xyz/openbmc_project/Network/Ipaddress interface.
   eg: xyz/openbmc_project/Network/eth0/ipv4/1/
        xyz/openbmc_project/Network/eth0/ipv6/1/

2. RemoveIPAddress: This will delete the specified IP address 
   for the given interface.

3. GetIPAddress: This will retrieve all the IP address details 
   for the given interface.

IPAddress: This describes the ipaddress specific parameters.
           eg: ipadddress,perfixlength,gateway,origin of the ip address.
