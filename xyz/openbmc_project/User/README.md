# User Management

## Overview
User Manager service exposes D-Bus methods for user management operations.

### User Manager Interface
User manager interface `xyz.openbmc_project.User.Manager` provides following
methods, properties and signals.
#### methods
* CreateUser - To create new user to the system.
* RenameUser - To rename existing user to new name in the system.

#### properties
* AllGroups - To list all the groups supported in the system.
* AllPrivileges  - To list all the privileges supported in the system.

#### signals
* UserRenamed - Signal sent out when user is renamed in the system.

### Users Interface
User manager daemon, will create users objects for each and every user existing
in the system with object name as follows.
`xyz.openbmc_project.User.Users.<user name>`

Each users object will have following properties associated with
it, and the objects can be handled through `org.freedesktop.DBus.ObjectManager`
#### methods
* DeleteUser - To delete the user in the system.

#### properties
* UserPrivilege - Privilege of the user.
* UserGroups - Groups to which the user belongs.
* UserEnabled - User enabled state.

##Note
This interface doesn't provide ways to set / update password. The same has to
be set / updated through pam_chauthtok() (PAM modules). This is to avoid
sending out password through D-Bus.
