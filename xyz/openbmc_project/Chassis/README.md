# Chassis Power Control 

## Overview
Chassis Power Control service exposes D-Bus methods for chassis power operations.

### Chassis Control Interface
Chassis control interface `xyz.openbmc_project.Chassis.Control.Chassis` provides following
methods.
#### methods
* powerOn - To power on the system.
* powerOff - To power off the system.
* softPowerOff - To soft power off the system.
* reboot - To reboot the system.
* softReboot - To soft reboot the system.
* quiesce - To quiesce the system.
* getPowerState - To get the system power state.

### Power Control Interface
Power control interface `xyz.openbmc_project.Chassis.Control.Power` provides following
methods, properties, signals.

#### methods
* setPowerState - To set host power state, 0 for force power off host, 1 for power on host.
* getPowerState - To get current host power status, 0 for host power off, 1 for host power on.
* forcePowerOff - To force power off the host.

#### properties
* vrd_good - ACPI status, default: 0.
* s4s5_state - ACPI status, default: 0.
* pgood - pgood property, 0 is means off, 1 means power on.
* state - state property, 0 is means off, 1 means power on.
* pgood_timeout - pgoodtimeout property.

#### signals
* PowerGood - Signal for powergood.
* PowerLost - Signal for powerlost.

### Power Button Interface
Power button interface `xyz.openbmc_project.Chassis.Buttons.Power` provides following
methods, properties, signals.

#### methods
* simPress - To emulate physical power button press.
* simLongPress - To emulate physical power button long press.

#### properties
* ButtonState - Power button value.
* PressedTime - When power button is pressed.

#### signals
* Released - Power button released signal.
* Pressed - Power button pressed signal.
* PressedLong - Power button long pressed signal.

### ID Button Interface
ID button interface `xyz.openbmc_project.Chassis.Buttons.ID` provides following
methods, properties, signals.

#### methods
* simPress - To emulate ID button press.

#### signals
* Released - ID button released signal.
* Pressed - ID button pressed signal.

### Reset Button Interface
ID button interface `xyz.openbmc_project.Chassis.Buttons.Reset` provides following
methods, properties, signals.

#### methods
* simPress - To emulate reset button press.

#### signals
* Released - Reset button released signal.
* Pressed - Reset button pressed signal.

