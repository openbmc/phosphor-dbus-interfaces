# Service Management

## Overview
Applications can use service manager daemon to configure services like
phosphor-ipmi-net, web, SSH etc. service in the system.

### Attributes Interface
Service manager daemon, will create objects for configurable service
in the system under object path `/xyz/openbmc_project/Control/Service/<object>`.
Each service object can be handled through 'org.freedesktop.DBus.ObjectManager'.
Service object will expose following properties.

#### xyz.openbmc_project.Control.Service.Attributes interface
##### properties
* State - State of the service. Enabled / Disabled.
* Port - Port number to which the service is configured to listen.
* Channel - Supported network interface objects, to which port has to bind.

##Note
Implementations can elect to implement service manager daemon either through
'systemctl' (override.conf) or implement the same through 'iptables' logic, of
disabling the port, updating the port etc.
