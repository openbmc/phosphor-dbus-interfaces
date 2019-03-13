# Session Management

## Overview
Session Manager service exposes D-Bus methods for session management operations.

### Session Manager Interface
Session manager interface `xyz.openbmc_project.Session.Manager` provides following
methods, properties and signals.

#### xyz.openbmc_project.Session.Manager interface
##### methods
* CreateSession - To create new session object to the system.

##### properties
* MaxSessionSupported - To list all the groups supported in the system.
* ActiveSessionCount - To hold the no of active sessions.

Session manager service will create session objects for every session
in the system under object path `/xyz/openbmc_project/session/<SessionIndex>`.
Each session object can be handled through 'org.freedesktop.DBus.ObjectManager'.
session  object will expose following properties and methods.

#### xyz.openbmc_project.Session.Info interface
##### properties
* SessionHandle - SessionHandle,unique one-byte number to locate the session.
* Channel   -  Session created Channel.
* SessionPrivilege - Privilege of the session.
* RemoteIPAddr  – Remote IP address.
* RemotePort   - Remote Port address.
* RemoteMACAddress -Remote MAC Address.
* UserID  - Session created by given user id.



#### xyz.openbmc_project.Object.Delete
#### methods
* Delete - To delete the session object in the system.

