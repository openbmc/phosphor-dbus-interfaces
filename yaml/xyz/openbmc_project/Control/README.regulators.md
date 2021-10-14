# Voltage Regulator Control

## Overview

Voltage regulators convert an input voltage into a different,
tightly-controlled, output voltage.

A voltage regulator produces one or more output voltage rails.  Each rail
provides a specific voltage level to power hardware components.  For example, a
regulator may produce both a 0.8V rail and a 1.1V rail that power different
parts of the system.

A regulator typically sets each rail to a default output voltage.  Many
regulators allow the output voltage to be modified so it is tailored to the
current system configuration or runtime conditions.  Other aspects of the
regulator can often be configured as well, such as over current and over
voltage protection levels.

OpenBMC provides two D-Bus interfaces for configuring a voltage regulator:
* The [VoltageRegulatorControl](VoltageRegulatorControl.interface.yaml)
  interface provides the ability to set the output voltage for a regulator
  rail.
* The [VoltageRegulatorMode](VoltageRegulatorMode.interface.yaml) interface
  provides the ability to set which implementation-specific mode a regulator
  should run in, such as "HighPower" or "LowPower".


## D-Bus Object Paths

### Regulator Object Paths

Voltage regulators must have the following D-Bus object path:
```
  /xyz/openbmc_project/regulators/<regulator_name>
```

`<regulator_name>` is the unique name of the voltage regulator, such as
`standby_reg` or `proc0_regulator`.

The `VoltageRegulatorMode` interface can be implemented on this object path if
the `Selected` property sets a mode that applies to the entire regulator and
all the voltage rails that it produces.

### Rail Object Paths

Voltage rails must have the following D-Bus object path:
```
  /xyz/openbmc_project/regulators/<regulator_name>/<rail_name>
```

`<regulator_name>` is the regulator that produces the rail.  `<rail_name>` is
the unique name of the voltage rail, such as '3p3_vcs' or 'proc0_vdd'.

The `VoltageRegulatorControl` interface can be implemented on this object path
to set the output voltage of the rail.

The `VoltageRegulatorMode` interface can be implemented on this object path if
the `Selected` property sets a mode that applies only to this rail.


## Associations

[Associations](../Association.interface.yaml) can optionally be created between
a regulator voltage rail and the [inventory
item(s)](../Inventory/Item.interface.yaml) that it powers.

### Association Names

The following association names must be used:
* `powers`
  * Association from the rail to the inventory item(s) that it powers.  For
    example, a 3.3V rail might power 4 different PCIe slots.
* `powered_by`
  * Association from an inventory item to the rail(s) that power it.  For
    example, a processor might be powered by both a "core" and an "IO" rail at
    different voltages.

### Example Associations

* /xyz/openbmc_project/regulators/processor_reg1/vdd/powers
  * The `Endpoints` property contains:
    * /xyz/openbmc_project/inventory/system/chassis/motherboard/cpu0
    * /xyz/openbmc_project/inventory/system/chassis/motherboard/cpu1
* /xyz/openbmc_project/inventory/system/chassis/motherboard/cpu0/powered_by
  * The `Endpoints` property contains:
    * /xyz/openbmc_project/regulators/processor_reg1/vdd
    * /xyz/openbmc_project/regulators/processor_reg2/vio

### Example Use Case

An OpenBMC application needs to change the output voltage of the rail that
powers `cpu1`.

The following algorithm could be used:
* Find the `cpu1` inventory item on D-Bus.
* Find the rail(s) that power `cpu1` using the `powered_by` association.
* If multiple rails power `cpu1`, use the `RailType` property of the
  `VoltageRegulatorControl` interface to find the correct rail.
* Modify the `Voltage' property of the `VoltageRegulatorControl` interface to
  set the output voltage of the rail.
