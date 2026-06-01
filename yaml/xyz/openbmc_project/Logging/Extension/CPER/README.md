# CPER Processed Log Entry Extension

## Overview

The `xyz.openbmc_project.Logging.Extension.CPER.Processed` interface associates
processed Common Platform Error Record (CPER) metadata with a
`xyz.openbmc_project.Logging.Entry`.

This interface provides processed CPER metadata that may be consumed by
applications exposing, analyzing, or processing log entry information.

CPER metadata is implemented as an extension because it applies only to log
entries associated with CPER content and should not be included in the base
logging entry interface.

For overall CPER architecture, processing flow, and protocol-specific mapping
details, refer to the [CPER Event Logs][design-doc] design document.

[design-doc]:
  https://github.com/openbmc/docs/blob/master/designs/cper-event-logs.md
