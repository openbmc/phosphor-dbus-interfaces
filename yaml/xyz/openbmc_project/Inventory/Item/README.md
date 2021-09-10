# Inventory Association

DBus objects with xyz.opebmc_project.Inventory.Item.${ItemType} interface might
be associated with other inventory objects. Such association can be translated
to Redfish schemas and then indicate the system topology.

Document ObjectMapper association forward and reverse names as follows:
* two chassis with containment relation: [contains, containedby]
* chassis and processors: [processors, chassis]
* chassis and memories: [memories, chassis]
* chassis and PCIe slots: [pcie_slots, chassis]
* chassis and power supply unit: [poweredby, chassis]
