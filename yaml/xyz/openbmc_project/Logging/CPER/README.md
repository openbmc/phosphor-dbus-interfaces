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

For overall CPER architecture, processing flow, and implementation details,
refer to the [CPER Event Logs][design-doc] design document.

[design-doc]:
  https://github.com/openbmc/docs/blob/master/designs/cper-event-logs.md
