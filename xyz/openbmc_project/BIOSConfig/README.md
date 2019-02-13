Remote BIOS Configuration via BMC
Overview
Provides ability for the user to view and modify the
BIOS setup configuration parameters remotely via BMC at any Host state.
Modifications to the parameters take place upon the next system reboot or
immediate based on the host firmware.
Please refer https://gerrit.openbmc-project.xyz/c/openbmc/docs/+/29320

Remote BIOS Configuration (RBC) service exposes D-Bus methods for
BIOS settings management operations.

RBC Manager Interface
xyz.openbmc_project.BIOSConfigManager provides following methods, properties.

Object Path : /xyz/openbmc_project/biosconfigMgr

xyz.openbmc_project.BIOSConfigManager

methods:
SetAttribute -To set the particular BIOS attribute  with new value.
GetAttribute -To get the bios attribute current values and pending values if again.
GetAllAttributes-To get all bios attributes details.
SetAllAttributes-To set all bios attributes details.
GetPendingAttributes -To get all pending bios Atrributes list.
SetPendingAttributes -To set all pending bios Atrributes list.


Properites:
RBCCapability - RBC capabilities flag set by BIOS

Signals:
ResetBIOSSettings - Signal sent out when reset bios setting is requested.
AttributeChanged - Signal sent out when attribute is changed

PasswordInterface:

xyz.openbmc_project.BIOSConfig.Password provides following Methods and Properities.

xyz.openbmc_project.BIOSConfig.Password Interface

Methods:
VerifyPassword
ChangePassword

Properities:
IsPasswordInitDone - To indicate BIOS password related details are recevied or not.


