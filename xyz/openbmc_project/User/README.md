# User Management

## Overview
User Manager service exposes D-Bus methods for user management operations.

### User Manager Interface
User manager interface `xyz.openbmc_project.User.Manager` provides following
methods, properties and signals.

#### xyz.openbmc_project.User.Manager interface
##### methods
* CreateUser - To create new user to the system.
* RenameUser - To rename existing user to new name in the system.

##### properties
* AllGroups - To list all the groups supported in the system.
* AllPrivileges  - To list all the privileges supported in the system.

##### signals
* UserRenamed - Signal sent out when user is renamed in the system.

### Users Interface
User manager daemon, will create user objects for each and every user existing
in the system under object path `/xyz/openbmc_project/user/<user name>`.
Each user object can be handled through 'org.freedesktop.DBus.ObjectManager'.
User object will expose following properties and methods.

#### xyz.openbmc_project.User.Attributes interface
##### properties
* UserPrivilege - Privilege of the user.
* UserGroups - Groups to which the user belongs.
* UserEnabled - User enabled state.

#### xyz.openbmc_project.Object.Delete
#### methods
* Delete - To delete the user object in the system.

##Note
This interface doesn't provide ways to set / update password. The same has to
be set / updated through pam_chauthtok() (PAM modules). This is to avoid
sending out password through D-Bus.
