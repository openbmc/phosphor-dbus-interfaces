# Representing Inventory Items on DBus

## Overview

Inventory refers to physical objects. Some of the objects can be physically
accessed, such as a board, a chassis and a drive. Some objects are embedded in
other objects, such as a BMC embedded in a board, or a core in a CPU. The DBus
interfaces in this directory describe the DBus representation of those physical
objects. A graph consisting of Inventory objects as vertices and Association as
edges can be constructed that represents the relationship between different
parts (such as chassis, drive, sensors, etc) of the system.

## Inventory Association

DBus objects with `xyz.opebmc_project.Inventory.Item.${ItemType}` interface
might be associated with other inventory objects. Such association can be
translated to Redfish schemas and then indicate the system topology.

Document ObjectMapper association forward and reverse names as follows:

- Item and Item: `{containing, contained_by}`
- Sensor.Value and Bmc: `{monitoring, monitored_by}`
- Fan and Item: `{cooling, cooled_by}`
- Led.Group and Item: `{identifying, identified_by}`
  `{fault_identifying, fault_identified_by}`
- PowerSupply and Item: `{powering, powered_by}`
- FabricAdapter and Connector.Port: `{connecting, connected_to}`
- Cpu and PCIeDevice: `{connecting, connected_to}`
- Cpu and PCIeSlot: `{connecting, connected_to}`
- PCIeSwitch and PCIeSlot: `{connecting, connected_to}`
- Control.Throttle and Item: `{throttling, throttled_by}`
- Cable and Item: `{connecting, connected_to}`
