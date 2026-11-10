# Log Entry Time Extension

## Overview

The time logging extension allows services to associate an origin timestamp with
a `xyz.openbmc_project.Logging.Entry`.

This is useful for services that collect log entries from secondary management
controllers, where the time at which the event was reported by the originating
controller may differ from the time at which the log entry was created on the
BMC. The origin timestamp can be used to order log entries more accurately.

## OriginTime

The `xyz.openbmc_project.Logging.Extension.Time.OriginTime` interface associates
a `uint64_t` timestamp, as reported by the log origin, with a log entry.
