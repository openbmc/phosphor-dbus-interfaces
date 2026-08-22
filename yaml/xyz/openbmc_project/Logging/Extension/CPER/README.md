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

## CPER.Processed

The `xyz.openbmc_project.Logging.Extension.CPER.Processed` interface associates
processed CPER metadata with a log entry.

This interface provides processed CPER metadata that may be consumed by
applications exposing, analyzing, or processing log entry information.

Typical metadata includes:

- CPER content type (record or section)
- Notification Type identifiers
- Section Type identifiers
- Vendor-specific decoded information

## CPER.Raw

The `xyz.openbmc_project.Logging.Extension.CPER.Raw` interface associates raw
CPER binary content with a log entry.

This interface provides raw CPER content that may be consumed by logging
infrastructure during log creation and processing.

The raw CPER binary represents the original artifact received from the CPER
producer.

## Design Notes

- `CPER.Processed` provides processed CPER metadata.
- `CPER.Raw` provides raw CPER binary content.
- Both interfaces apply only to log entries associated with CPER content.
- CPER functionality is implemented through extensions to avoid expanding the
  base logging entry interface.

For overall CPER architecture, processing flow, and protocol-specific mapping
details, refer to the [CPER Event Logs][design-doc] design document.

[design-doc]:
  https://github.com/openbmc/docs/blob/master/designs/cper-event-logs.md
