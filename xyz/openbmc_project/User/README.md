# User Management

## Overview

User Manager service exposes D-Bus methods for user management operations.
It exposes `xyz.openbmc_project.User.Manager` as a service and handles
objects through `org.freedesktop.DBus.ObjectManager`.

### User Manager Interface
User manager interface `xyz.openbmc_project.User.UserMgr` provides following
methods, properties and signals.
#### methods
* AddUser - To add new user to the system.
* DeleteUser - To delete existing user in the system.

#### properties
* ListGroups - To list all the Groups, supported in the system.
* ListPrivileges  - To list all the Privileges, supported in the system.

#### signals
* UserUpdated - signal which will be sent out for addition, deletion or
modification of the user(Groups/Privilege update) in the system.

### Users Interface
User manager daemon, will create Users objects for each and every user existing
in the system with object name as follows.
`xyz.openbmc_project.User.Users.<user name>`

Each and every Users object will have the following properties associated with
it, and the objects can be handled through `org.freedesktop.DBus.ObjectManager`
#### properties
* UserPrivilege - Privilege of the user.
* UserGroups - Groups to which the user belongs.

##Note
This interface doesn't provide ways to set / update password. The same has to
be set / updated through pam_chauthtok() (PAM modules). This to avoid sending
out password through D-Bus.
