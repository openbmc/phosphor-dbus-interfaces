# Remote BIOS Configuration via BMC

## Overview

Provides ability for the user to view and modify the BIOS setup configuration
parameters remotely via BMC at any Host state. Modifications to the parameters
take place upon the next system reboot or immediate based on the host firmware.

Please refer to the [design][design] for more details.

Remote BIOS Configuration (RBC) service exposes D-Bus methods for BIOS settings
management operations.

## RBC Manager Interface

### Interface xyz.openbmc_project.BIOSConfigManager

- Object Path: `/xyz/openbmc_project/bios_config/manager0`

Methods:

- `SetAttribute` -To set the particular BIOS attribute with new value.
- `GetAttribute` -To get the bios attribute current and pending values.
- `GetPendingAttributes` -To get all pending bios Atrributes list.
- `SetPendingAttributes` -To set all pending bios Atrributes list.

Properites:

- `ResetBIOSSettings` - To reset the BIOS settings based on the Reset Flag.
- `AllBaseAttributes` - To store all bios attributes details.

Signals:

- `PendingAttributesCreated` - Signal sent out, when Pending attributes list
  created.

### Interface xyz.openbmc_project.BIOSConfig.Password

Methods:

- `VerifyPassword`
- `ChangePassword`

Properities:

- `IsPasswordInitDone` - To indicate BIOS password related details are received
  or not.

[design]: https://github.com/openbmc/docs/blob/master/designs/remote-bios-configuration.md
