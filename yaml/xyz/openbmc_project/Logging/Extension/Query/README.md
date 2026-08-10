# Log Query Extensions

## Overview

Provide an interface for services to associate a unique searchable hint while
creating a log entry as defined in the [Error and Event Logging][design-doc]
design.

## SearchHint

The `xyz.openbmc_project.Logging.Extension.Query.SearchHint` interface can be
used to associate a string hint key with each log entry. Services may then in
the future query for log entries matching said hint.

[design-doc]:
  https://github.com/openbmc/docs/blob/master/designs/event-logging.md#search-hints
