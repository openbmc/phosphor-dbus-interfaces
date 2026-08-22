# CPER Log Entry Extensions

## Overview

The CPER logging extensions associate Common Platform Error Record (CPER)
information with a `xyz.openbmc_project.Logging.Entry`.

These interfaces support the attachment of both processed CPER metadata and raw
CPER content to log entries without expanding the base
`xyz.openbmc_project.Logging.Entry` interface.

CPER information is implemented through extensions because it applies only to
log entries associated with CPER content and should not be included in the base
logging entry interface.

## CPERProcessed

The `xyz.openbmc_project.Logging.Extension.CPERProcessed` interface associates
processed CPER metadata with a log entry.

This interface provides processed CPER metadata that may be consumed by
applications exposing, analyzing, or processing log entry information.

Typical metadata includes:

- CPER content type (record or section)
- Notification Type identifiers
- Section Type identifiers
- Vendor-specific decoded information

## CPERRaw

The `xyz.openbmc_project.Logging.Extension.CPERRaw` interface associates raw
CPER binary content with a log entry.

This interface provides raw CPER content that may be consumed by logging
infrastructure during log creation and processing.

The raw CPER binary represents the original artifact received from the CPER
producer.

## CPERRaw Retrieval

The `xyz.openbmc_project.Logging.CPERRaw` interface provides retrieval of the
authoritative CPER artifact associated with a log entry.

This interface allows consumers to access persisted CPER content through a
file-descriptor based retrieval mechanism.

## Design Notes

- `CPERProcessed` provides processed CPER metadata.
- `CPERRaw` provides raw CPER binary content.
- Both interfaces apply only to log entries associated with CPER content.
- CPER functionality is implemented through extensions to avoid expanding the
  base logging entry interface.

For overall CPER architecture, processing flow, and protocol-specific mapping
details, refer to the CPER Event Logs design document.
