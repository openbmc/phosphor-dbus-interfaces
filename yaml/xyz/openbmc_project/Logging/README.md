# OpenBMC logging

- Provides a mechanism for logging events and errors to the journal.
- Creates error entry D-Bus objects when an error is reported/committed.
- Persists error entries across power off.

## Error definitions

### Generic error definitions

- Generic errors used by applications are defined at
  [phosphor-dbus-interfaces][phosphor-dbus-interfaces].
- Generic errors can be used by all the applications by including the generated
  elog-errors.hpp header file.

[phosphor-dbus-interfaces]: https://github.com/openbmc/phosphor-dbus-interfaces

### Application error definitions

- There are errors that are not generic and are very specific to the
  application. Such errors are defined in the application that uses the error.
- Refer to [openpower-debug-collector][openpower-debug-collector].

[openpower-debug-collector]:
  https://github.com/openbmc/openpower-debug-collector

### Error YAML files

- Every error defined will have an error YAML file and a corresponding error
  metadata YAML file.
- The error YAML file contains the error name and a one-line description of the
  error. An [example][error-example] of an error YAML file is available.
- The error metadata YAML file captures required data. The format of the data is
  defined in the error metadata file. An [example][metadata-example] of an error
  metadata YAML file is available.

[error-example]:
  https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/yaml/xyz/openbmc_project/Common/File.errors.yaml
[metadata-example]:
  https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/yaml/xyz/openbmc_project/Common/File.metadata.yaml

## Logging to journal

- Applications can log debug/error information to the journal using the **log**
  API
  - Refer to [log.hpp][log-header].
- Applications can commit errors to the journal using the **report** or
  **commit** API
  - Refer to [elog.hpp][elog-header].
  - Logging entry D-Bus objects are created for the committed errors.

[log-header]:
  https://github.com/openbmc/phosphor-logging/blob/master/lib/include/phosphor-logging/log.hpp
[elog-header]:
  https://github.com/openbmc/phosphor-logging/blob/master/lib/include/phosphor-logging/elog.hpp

## Delete All interface

- Use the [DeleteAll.interface.yaml][deleteall] for deleting all the logging
  entries.

[deleteall]:
  https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/yaml/xyz/openbmc_project/Collection/DeleteAll.interface.yaml

### Vendor Extension Model for Log Entries

The Logging.Entry interface includes an `Oem` property to allow vendor- or
platform-specific metadata to be associated with log entries.

#### Overview

The `Oem` property provides a structured and extensible container for
information that is not covered by the standard logging fields.

The data is organized using a vendor-namespace model:

    Oem = {
        "<Vendor>": {
            "<Property>": <Value>
        }
    }

This allows each platform or vendor to define and extend their own metadata
independently without impacting the core logging schema.

#### Responsibility Model

- The logging service:
  - Owns the `Oem` property and its lifecycle
  - Stores and exposes it as part of the log entry
  - Treats the contents as opaque data

- Platform or vendor-specific components:
  - Contribute additional metadata during log creation
  - Define the structure and meaning of their own namespace
  - Ensure consistency and correctness of the data they provide

#### Design Guidelines

- The `Oem` property must contain only vendor-specific or derived data
- It must not duplicate or override standard log entry fields such as: Message,
  Severity, Timestamp, or Id
- Data should be structured (hierarchical) rather than flat key-value strings
  where possible
- Each vendor namespace should remain independent to avoid conflicts

#### Notes

This design keeps the core logging model generic while enabling flexible
platform-specific extensions.

Consumers of log entries can choose to interpret vendor-specific data if they
recognize the corresponding namespace, or safely ignore it otherwise.
