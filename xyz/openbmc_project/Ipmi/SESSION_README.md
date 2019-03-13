# Session Management

## Overview
IPMI RMCP+ sessions are created and maintained by netipmid daemon,
whereas we need to provide details about the same using ipmid daemon.
Hence IPMI RMCP+ session details has to be exposed through D-Bus interface,
so that both ipmid daemon & netipmid daemon will be in sync.


#### xyz.openbmc_project.Ipmi.SessionInfo interface
##### properties
* SessionHandle - SessionHandle,unique one-byte number to locate the session.
* Channel   -  Session created channel.
* SessionPrivilege - Privilege of the session.
* RemoteIPAddr  – Remote IP address.
* RemotePort   - Remote port address.
* UserID  - Session created by given user id.



#### xyz.openbmc_project.Object.Delete
#### methods
* Delete - To delete the session object in the system.

