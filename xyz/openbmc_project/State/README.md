# BMC, Host, and Chassis State Management

## Overview

The goal of the phosphor-state-manager repository is to control and track the
states of the different software entities in a system.  All users will usually
implement the BMC state interfaces, and some, when creating servers will do the
Host and Chassis state interfaces.  These interfaces will be the mechanism by
which you determine the state of their corresponding instances, as well as
reboot the BMC and hosts, and turn on and off power to the chassis.  The
interfaces are designed in a way to support a many to many mappings of each
interface.

There are three states to track and control on a BMC based server.  The states
below in () represent the actual parameter name as found in
`/xyz/openbmc_project/state/`+`/bmcX,/hostY,/chassisZ` where X,Y,Z are the
instances (in most cases 0).  For all three states, the software tracks a
current state, and a requested transition.

1. *BMC* : The BMC has either started all required systemd services and reached
it's required target (Ready) or it's on it's way there (NotReady).  Users can
request a (Reboot).

2. *Host* : The host is either (Off), (Quiesce) or it's (Running).
Running simply implies that the processors are executing instructions.  Users
can request the host be in a (Off), (On), or (Reboot) state.  More details on
different Reboot options below.

3. *Chassis* : The chassis is either (Off) or (On)
This represents the state of power to the chassis.  The Chassis being on
is a pre-req to the Host being running.  Users can request for the chassis to be
(Off) or (On).  A transition to one or the other is implied by the transition
not matching the current state.

A simple system design would be to include a single *BMC*, *Host*, and
*Chassis*.

Details of the properties and their valid settings can be found in the state
manager dbus interface [specification](https://github.com/openbmc/phosphor-dbus-interfaces/tree/master/xyz/openbmc_project/State/)

### BMC

The *BMC* would provide interfaces at
`/xyz/openbmc_project/state/bmc<instance>`

### *Host*

The *Host* would provide interfaces at
`/xyz/openbmc_project/state/host<instance>`

### *Chassis*

The *Chassis* would provide interfaces at
`/xyz/openbmc_project/state/chassis<instance>`

## Cold vs. Warm Host Reboots

A cold reboot is where you simply cut power to a chassis, and then reapply
power.  You don't give the software running on that chassis any chance to
cleanly shut down.  A warm reboot is where you send a notification to the host
that is running on that chassis that a shutdown is requested, and wait for that
host firmware to indicate it has shut itself down.  You then remove power from
the chassis.  By default, a reboot transition request against the host object
will result in a warm reboot.  If a user desires a cold reboot then they should
simply issue a power off transition request to the chassis, and then issue an on
transition request to the host.
