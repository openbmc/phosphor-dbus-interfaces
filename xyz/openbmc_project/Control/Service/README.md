# Service Management

## Overview
Applications must use service manager daemon to configure services like
phosphor-ipmi-net, bmcweb, obmc-console etc in the system, instead of directly
controlling the same using 'systemd' or 'iptables'. This way client
applications doesn't need to change to configure services, when the
implementations differ. The list of services supported are
`"phosphor-ipmi-net", "bmcweb","phosphor-ipmi-kcs", "start-ipkvm", "obmc-console"`.

## Implementation Details

Service manager daemon will create D-Bus objects for configurable services
in the system under the object path `/xyz/openbmc_project/control/service`. For
each instance of the service there will be a D-Bus object 
`/xyz/openbmc_project/control/service/<service-name>`. 
For example, if there are two instances of `phosphor-ipmi-net` then there 
will be two D-Bus objects 
`/xyz/openbmc_project/control/service/phosphor_2dipmi_2dnet_40eth0`
and `/xyz/openbmc_project/control/service/phosphor_2dipmi_2dnet_40eth1`.
The D-Bus object implements the interface 
`xyz.openbmc_project.Control.Service.Attributes`
The service manager manages both the service and socket unit files associated
for a service.

In order to update the property value of a service, `override.conf` file under
`/etc/systemd/system/<Service unit name>/` has to be updated and service unit 
has to be restarted through `org.freedesktop.systemd1`.

#### xyz.openbmc_project.Control.Service.Attributes interface
##### properties
* Enabled - Service is enabled or disabled
* Masked - Service is masked or not masked
* Port - Port number to which the service is configured to listen, if applicable for service
* Running - Service is running or not running

## Usage

RMCP+ port number can be updated from the default port number 623 to a custom 
one by updating the `Port` property value under the interface
`xyz.openbmc_project.Control.Service.Attributes`.

To permanently disable a service the `Masked` property under the interface
`xyz.openbmc_project.Control.Service.Attributes` needs to be set to `true` and
vice versa to enable a service.


