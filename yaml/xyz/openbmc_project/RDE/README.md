# xyz.openbmc_project.RDE

## Overview

This module defines D-Bus interfaces for Redfish Device Enablement (RDE)
services, allowing the BMC to discover, manage, and interact with
Redfish-capable devices over supported transports such as PLDM, NVMe-MI, and
SPDM.

It provides two key interfaces:

- `xyz.openbmc_project.RDE.Device`: Represents each RDE-capable endpoint.

- `xyz.openbmc_project.RDE.Manager`: Centralized interface for invoking Redfish
  operations and querying device metadata.

---

## Components

### 1. RDE Device Interface

The `Device` interface exposes:

- Supported Redfish operations (e.g., GET, REPLACE)
- Protocol-level feature support (e.g., BEJ encoding, Redfish Events)
- Redfish schema descriptors used for client introspection
- Device-wide metadata including unique identifier and negotiation status

This interface is automatically instantiated for each discovered RDE device.

### 2. RDE Manager Interface

The `Manager` interface provides:

- Methods to perform Redfish operations on any device by ID
- Access to schema metadata and supported capabilities
- Support for inline or file-based payloads and responses
- A simplified abstraction for clients that do not directly track device paths

---

## Usage Summary

- Use the `Device` interface when working directly with a known D-Bus object
  path or to subscribe to property changes.
- Use the `Manager` interface for centralized access when you have only a device
  ID or when performing file-based or inline Redfish operations.
- Both interfaces are designed to be complementary. Clients may choose based on
  privilege level, integration depth, or preferred data access pattern.

---

## Documentation References

- `Device.interface.yaml`: YAML definition for the `Device` interface
- `Manager.interface.yaml`: YAML definition for the `Manager` interface
- Enumerations include operation types, feature types, schema keys, and
  negotiation status
