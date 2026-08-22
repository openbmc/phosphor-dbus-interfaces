# Common Platform Error Record (CPER)

## Overview

The interfaces in this namespace provide common definitions and processing APIs
for Common Platform Error Record (CPER) support within OpenBMC.

## Interfaces

### Types

`xyz.openbmc_project.Logging.CPER.Types`

Provides common type definitions shared across CPER-related interfaces.

### Processor

`xyz.openbmc_project.CPER.Processor`

Provides a common ingress interface for submitting CPER content for decoding and
processing.

Producers may submit complete CPER records or individual CPER sections.
Implementations may decode, analyze, and transform submitted content before
integrating with downstream event and logging services.

### Raw

`xyz.openbmc_project.CPER.Raw`

Provides an interface for extracting the raw CPER content from a `Logging.Entry`
that has a CPER section. This is provided as an optimization to extract
potentially large amounts of data so that we are not hosting a large array
through the `Logging.Extension.CPER.Raw` interface.

## References

For overall CPER architecture, processing flow, and implementation details,
refer to the [CPER Event Logs][design-doc] design document.

[design-doc]:
  https://github.com/openbmc/docs/blob/master/designs/cper-event-logs.md
