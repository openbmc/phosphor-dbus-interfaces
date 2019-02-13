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
GetPayload -To get the  payload data
SetPayload -Create the payload object for storing the payload details and set the paylaod data
GetAllAttributes -To get all bios Atrribute list.

Properites:
MaxPayloadSupported - max payload supported in RBC feature
RBCCapability - RBC capabilities flag set by BIOS
ResetBIOS - Indicate default BIOS seting request flag

Signals:
PayloadCreated - Signal sent out when new payload is created in the system.
ResetBIOSSettings - Signal sent out when reset bios setting is requested. 

Payload Interface

Remote BIOS Configuration daemon will create payload objects for every payload
received in the system.

xyz.openbmc_project.BIOSConfig.Payload provides following properties and signals.

Objct Path :/xyz/openbmc_project/biosconfigMgr/<PayloadType>

xyz.openbmc_project.BIOSConfig.Payload

properties:
PayloadState - Supported state:Created / In transfer / EndofTransfer/ ValidPayload / Invalid Payload
TotalPayloadlength -Total payload length
TotalPayloadChecksum - Total payload Checksum
PayloadCreationTime - Payload creation time
PayloadFlag - Payload flags if needed.

PasswordInterface:

xyz.openbmc_project.BIOSConfig.Password provides following Methods and Properities.

xyz.openbmc_project.BIOSConfig.Password Interface 

Methods:
VerifyPassword
ChangePassword

Properities:
IsPasswordInitDone - To indicate BIOS password related details are recevied or not.


