# Representing Inventory Items on DBus

## Overview

Inventory refers to physical objects. Some of the objects can be physically
accessed, such as a board, a chassis and a drive. Some objects are embedded in
other objects, such as a BMC embedded in a board, or a core in a CPU. The DBus
interfaces in this directory describe the DBus representation of those physical
objects. A graph consisting of Inventory objects as vertexes and Association
as edges can be constructed that represents the relationship between different
parts (such as chassis, drive, sensors, etc) of the system.

## Usage of specific Inventory Item types

### Bmc

In [phosphor-health-monitor], Inventory.Item.Bmc is used for creating
association edges to utilization sensors (xyz.openbmc_project.Sensor.Value
interfaces under the "utilization" hierarchy) for indicating that those
utilization sensors monitor the BMC's resource usage rather than the host's.
The details of the associations are as follows:

- The [association tuples] of the utilization sensors are a bit different
  from the real sensors. Existing systems mostly use {`chassis`, `all_sensors`,
  `/inventory/system/board/foo`} or {`all_sensors`, `chassis`,
  `/sensor/(sensor type)/foo`} from the sensors' and chassis' point of view,
  respectively. Because BMC utilization sensors are about the BMC rather than
  the chassis, and to be able to distinguish the chassis from the BMC, those
  utilization sensors have association edges created with {`"monitoring"`,
  `"monitored_by"`, `/xyz/openbmc_project/inventory/bmc`} tuples from the
  utilization sensors' point of view.

[phosphor-health-monitor](https://github.com/openbmc/phosphor-health-monitor/blob/master/healthMonitor.cpp)
[association tuples](https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/yaml/xyz/openbmc_project/Association/Definitions.interface.yaml)
