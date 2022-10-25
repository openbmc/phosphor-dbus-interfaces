# Representing Inventory Items on DBus

## Overview

Inventory refers to a physical object. Some of the objects can be physically accessed, such as a board, a chassis and a drive. Some objects are embedded in other objects, such as a BMC embedded in a board, or a CPU core embedded in a CPU. The DBus interfaces in this directory describe the DBus representation of those physical objects.

## Usage of specific Inventory Item types

### Bmc

In terms of Redfish usage, an "Inventory.Item.Bmc" DBus object corresponds to a "Manager" Redfish resource. They are used to suppliment the Redfish Manager resource with location code and other details.

In addition, an "Inventory.Item.Bmc" DBus object is also used by [phosphor-health-monitor](https://github.com/openbmc/phosphor-health-monitor/blob/master/healthMonitor.cpp) for creating association edges to utilization sensors (xyz.openbmc_project.Sensor.Value interfaces under the "utilization" hierarchy) for indicating that those utilization sensors monitor the BMC's resource usage rather than the host's. The details of the associations are as follows:
- The [association tuples](https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/yaml/xyz/openbmc_project/Association/Definitions.interface.yaml) are created as {`"monitoring"`, `"monitored_by"`, `"/xyz/openbmc_project/inventory/bmc"`} from the utilization sensor's point of view. It means the current utilization sensor pointed to by the `this` pointer "is monitoring" the BMC, and the BMC is "monitored by" the current utilization sensor.
