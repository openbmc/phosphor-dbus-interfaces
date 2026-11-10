# Log Entry Time Extension

## Overview

Provide an interface for services to associate a timestamp with a log entry.
This is useful for services retrieving log entries for other secondary management
controllers to help influence the ordering of log entries.

## SearchHint

The `xyz.openbmc_project.Logging.Extension.Time.OriginTime` interface can be
used to associate a `uint64_t` timestamp with a log entry.
