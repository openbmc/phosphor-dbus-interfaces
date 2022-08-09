# Inventory Association

DBus objects with xyz.opebmc_project.Inventory.Item.${ItemType} interface might
be associated with other inventory objects. Such association can be translated
to Redfish schemas and then indicate the system topology.

Document ObjectMapper association forward and reverse names as follows:
* cpu and PCIe slots: [associated_pcie_slots, upstream_processor]
* cpu and core: [cores, cpu]
