# Remote BIOS Configuration via BMC

## Overview

Provides ability for the user to view and modify the BIOS setup configuration
parameters remotely via BMC at any Host state. Modifications to the parameters
take place upon the next system reboot or immediate based on the host firmware.

Please refer to the [design][design] for more details.

Remote BIOS Configuration (RBC) service exposes D-Bus methods for BIOS settings
management operations.

## RBC Manager Interface

### Interface xyz.openbmc_project.BIOSConfig.Manager

- Object Path: `/xyz/openbmc_project/bios_config/manager`

Methods:

- `SetAttribute` -To set the particular BIOS attribute with new value.
- `GetAttribute` -To get the bios attribute current and pending values.

Properties:

- `ResetBIOSSettings` - To reset the BIOS settings based on the Reset Flag.
- `BaseBiosTable` - To store all bios attributes details.
- `PendingAttributes` - To store pending bios Attributes list.

### Interface xyz.openbmc_project.BIOSConfig.Password

- Object Path: `/xyz/openbmc_project/bios_config/password`

Methods:

- `ChangePassword` - To change BIOS setup password.

Properties:

- `PasswordInitialized` - To indicate BIOS password related details are received
  or not.

[design]:
  https://github.com/openbmc/docs/blob/master/designs/remote-bios-configuration.md
