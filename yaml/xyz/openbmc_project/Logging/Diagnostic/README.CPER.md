# CPER Log Entry Extension

## Overview

The CPER log entry extension associates Common Platform Error Record (CPER)
diagnostic data with a standard `xyz.openbmc_project.Logging.Entry`.

A CPER-producing service generates a lightweight notification event which
results in creation of a log entry. A logging plugin may attach the
`xyz.openbmc_project.Logging.CPER` interface to the created log entry and
provide CPER-specific metadata and access to the associated CPER artifact.

The CPER binary remains the authoritative diagnostic artifact associated with
the log entry.

## Architecture

```text
+----------------------+
| CPER Decoder Service |
+----------------------+
            |
            | Event Notification
            | xyz.openbmc_project.State.Cper.*
            |
            | Plugin Metadata
            |
            v
+----------------------+
| phosphor-logging     |
+----------------------+
            |
            | Create Log Entry
            | Attach Logging.CPER
            |
            v
+----------------------+
| Logging Entry        |
|                      |
| + Logging.Entry      |
| + Logging.CPER       |
+----------------------+
```

The notification event is intentionally lightweight and is not used to transport
CPER payload data.

## Producer Flow

A CPER-producing service is expected to:

1. Detect or receive a CPER record.
2. Maintain the raw CPER binary artifact.
3. Generate a CPER notification event.
4. Provide CPER metadata through the plugin.
5. Optionally provide decoded OEM metadata.

The plugin supplies metadata used to populate the associated
`xyz.openbmc_project.Logging.CPER` interface attached to the resulting log
entry.

## Plugin Expectations

Typical plugin inputs include:

```text
DiagnosticDataType
NotificationType
SectionType
OEM Metadata
CPER Binary Provider
Inventory Association (optional)
```

The plugin enriches the log entry by attaching the
`xyz.openbmc_project.Logging.CPER` interface.

The raw CPER artifact is exposed through:

```text
GetCPERBinary()
```

The implementation remains responsible for hosting and managing the underlying
CPER binary for the lifetime of the log entry.

## OEM Metadata

The `Oem` property provides a vendor or implementation-specific namespace for
decoded CPER information and supplemental diagnostics.

Example decoded CPER content:

```json
{
  "ExampleVendor": {
    "ErrorCategory": "PCIe",
    "Location": "0000:c1:00.0",
    "Severity": "Uncorrected",
    "DeviceType": "Endpoint"
  }
}
```

Typical uses include:

- Decoded CPER summaries
- Serviceability information
- Platform-specific diagnostics
- Device correlation information

OEM metadata is intended for lightweight decoded information.

Implementations should avoid storing large decoded payloads in D-Bus properties.
As a guideline, OEM metadata should remain relatively small (typically less than
3 KB). Large decoded content should be exposed through alternative artifact
retrieval mechanisms.

## Consumer Usage

Consumers may:

- Read CPER metadata from the interface.
- Read OEM metadata for decoded diagnostic information.
- Retrieve the authoritative CPER artifact using:

```text
GetCPERBinary()
```

Consumers requiring decoded or alternate representations may process the
returned CPER binary using implementation-specific or industry-standard CPER
tooling.

Consumers requiring Base64 content may generate it from the retrieved CPER
binary.

Base64 representations are intentionally not stored on D-Bus to avoid
unnecessary storage, serialization, and transport overhead.

## Redfish Mapping

This interface is intended to align with Redfish LogEntry CPER support.

Example:

```json
{
  "MessageId": "Platform.1.4.PlatformErrorAtLocation",
  "DiagnosticDataType": "CPER",
  "AdditionalDataURI": "/redfish/v1/Systems/system/LogServices/EventLog/Entries/123/attachment",
  "CPER": {
    "NotificationType": "e429faf1-3cb7-11d4-bca7-0080c73c8881"
  },
  "Oem": {
    "ExampleVendor": {
      "ErrorCategory": "PCIe",
      "Location": "0000:c1:00.0"
    }
  }
}
```

Conceptual mapping:

```text
GetCPERBinary()
    |
    +--> AdditionalDataURI

DiagnosticDataType
    |
    +--> LogEntry.DiagnosticDataType

NotificationType
    |
    +--> CPER.NotificationType

SectionType
    |
    +--> CPER.SectionType

OEM Metadata
    |
    +--> CPER.Oem
```

## Design Principles

- CPER binary is the authoritative diagnostic artifact.
- Notification events do not transport CPER payload data.
- GetCPERBinary() provides access to the original CPER artifact.
- Base64 CPER content is intentionally not stored on D-Bus.
- Consumers may generate Base64 content when required.
- OEM metadata is intended for lightweight decoded information.
- Large decoded payloads should be retrieved through separate artifact
  mechanisms.
- The interface aligns with Redfish LogEntry CPER support without standardizing
  decoded CPER schemas.
