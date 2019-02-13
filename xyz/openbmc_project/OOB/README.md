OOB BIOS config Management 
Overview
OOB Manager service exposes D-Bus methods for OOB management operations.

OOB BIOSConfig Manager Interface

xyz.openbmc_project.OOB.BIOSConfigManager   provides following methods, properties.

xyz.openbmc_project.OOB.BIOSConfigManager

methods:
SetBIOSAttributeValue -To set the particular  BIOS attribute  with new value. 
GetBIOSAttributeValue -To get the bios attribute current values and pending values if again.
ValidatePayloadFile -To validate the BIOS attribute / Image file uploaded
SendPayloadFilePath - To send the full BIOS Attribute file path and file payload type
GetPayloadFilePath -To get the payload file path based on the payload type
CreatePayload -Create the payload object for storing the payload details
ValidateUserPassword -To check the user password valid or not 

Properites:
MaxPayloadSupported - max payload supported in OOB feature
OOBCapability - OOB capabilities flag  set by BIOS
IsUserPwdInitDone - user password is init or not details. 
userBIOSPwdHash - user password hash array of upto 32  set by user if bios password check enforcment flag is set
BIOSPasswordHash - bios password hash array of upto 32  set by BIOS
BIOSPasswordSeed - bios password seed array of upto 16 set by BIOS.


PaylaodTranfer Interface 
OOB BIOS Config manager daemon, will create payload objects for every payload recvd  in the system under object path /xyz/openbmc_project/OOB/<PayloadType>.
Each OOB payload object can be handled through 'org.freedesktop.DBus.ObjectManager'. PayloadType object will expose following properties and methods.

xyz.openbmc_project.OOB.PayloadTransfer interface rovides following methods, properties and signals.

methods:
SetPayloadData
GetPaylaodData


properties :
PayloadState - Supported state :Created / In transfer / EndofTransfer/ ValidPayload / Invalid Payload
TotalPayloadlength -Total  payload length
TotalPayloadChecksum - Total payload Checksum
PayloadCreationTime - Payload creation time
PayloadFlag - Payload flags need for BIOS update :BIT0 -Normal region /BIT1 -Recovery region /BIT2- NV region