# Service Management

## Overview
Applications must use service manager daemon to configure services like
phosphor-ipmi-net, web, SSH etc. service in the system, instead of
directly controlling the same using 'systemd' or 'iptables'. This way client
applications doesn't need to change to configure services, when the
implementations differ.

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

## Note
Implementations can elect to implement service manager daemon either through
'systemctl' (override.conf) or implement the same through 'iptables' logic, of
disabling the port, updating the port etc.

## Example usage:
Webserver can update the RMCP+ port number from default 623 to different one,
by updating the `Port` property value under path `/xyz/openbmc_project/Control/
Service/netipmid` through interface `xyz.openbmc_project.Control.Service.
Attributes`.

## Systemd (override.conf) implementation
In order to update the property value, `override.conf` file under `/etc/systemd
/system/<Service unit name>/` has to be updated and service unit has to be
restarted through `org.freedesktop.systemd1`.
