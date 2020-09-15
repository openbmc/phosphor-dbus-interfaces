#PLDM FW Update

##Overview

The PLDM FW update package contains two major sections: the FW package
header, and the FW package payload. The FW package header is required to
describe the target device that the package is intended to update and
the component images that the FW update package contains. The FW
package payload is the actual FW image which can be used by FW device
for FW update.

Update Agent(BMC) will send the inventory commands to the all the
devices which are capable of PLDM FW update and exposes the inventory
info to the D-Bus. How PLDM FW update package reaches BMC is out of
scope of PLDM FWU spec 1.0.1. Once BMC receives the FW package, it
matches the package header with the inventory info, if matches proceeds
for FW update.

###PLDM FW update interfaces overview and hierarchy

/xyz/openbmc_project/pldm/fwu
|--xyz.openbmc_project.PLDM.FWU.FWUBase
|
|__/xyz/openbmc_project/pldm/fwu/<tid>
   |
   |__/xyz/openbmc_project/pldm/>fwu/<tid>/deviceDescriptors
   |   |--xyz.openbmc_project.PLDM.FWU.PCIDescriptor
   |   |--xyz.openbmc_project.PLDM.FWU.IANADescriptor
   |   |--xyz.openbmc_project.PLDM.FWU.PnPDescriptor
   |   |--xyz.openbmc_project.PLDM.FWU.ACPIDescriptor
   |
   |__/xyz/openbmc_project/pldm/fwu/<tid>/componentImageSetInfo
   |   |--xyz.openbmc_project.PLDM.FWU.ComponentImageSetInfo
   |
   |__/xyz/openbmc_project/pldm/fwu/<tid>/componentImageSetInfo/component_<comp_no>
       |--xyz.openbmc_project.PLDM.FWU.ComponentInfo

Note:
Descriptor for a device shall be defined by one of the following
(PCI Vendor ID, IANA Enterprise ID, UUID, PnP Vendor ID, or ACPI Vendor
ID) and the corresponding descriptor`s interface is exposed by the.
Device Descriptors object.
No new UUID descriptor incterface is defined as the existing UUID
interface will be used.

####FW Update Base
It is exposed by the object `/xyz/openbmc_project/pldm/fwu` with the
following interface
1. `xyz.openbmc_project.pldm.FWUBase` exposes a method by which PLDM
FWU can be initiated.

Each FW update capable device info is exposed by the object
`/xyz/openbmc_project/pldm/fwu/<tid>`.
It will have the following objects.
1. Device Descriptors
2. Component Image Set Info
3. Component Image Info (Each component is exposed as an object)

####Device Descriptors
Device Descriptors are exposed under the object path
`/xyz/openbmc_project/pldm/fwu/deviceDescriptors` with one of the
following interfaces.
1. `xyz.openbmc_project.PLDM.FWU.PCIDescriptor` which exposes the PCI
device descriptors. If the FD is a PCI device then this interface will
be exposed by the device descriptors object.
2. `xyz.openbmc_project.PLDM.FWU.IANADescriptor` which exposes IANA
descriptor properties. If FD have IANA Enterprise ID as the descriptor
type then this interface will be exposed by the device descriptors
object.
3. `xyz.openbmc_project.PLDM.FWU.PnPDescriptor` which exposes the Pnp
descriptor properties. If FD have PnP vendor ID as the descriptor
type then this interface will be exposed by the device descriptors
object.
4. `xyz.openbmc_project.PLDM.FWU.ACPIDescriptor` which exposes the ACPI
descriptor properties. If FD have ACPI vendor ID as the descriptor
type then this interface will be exposed by the device descriptors
object.

####Component Image Set Info
Component Image Set Info is exposed under the object path
`/xyz/openbmc_project/pldm/fwu/componentImageSetInfo` with the
following interface.
1. `xyz.openbmc_project.PLDM.FWU.ComponentImageSetInfo` which exposes the
component image set properties.

####Component Image Info
Component Image Info is exposed under the object path
`/xyz/openbmc_project/pldm/fwu/componentImageSetInfo/componentInfo_<component_no>'
with the following interface
1. `xyz.openbmc_project.PLDM.FWU.ComponentInfo` which exposes the
component Image properties.
