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

## OEM Extension Metadata for Log Entries

The interface `xyz.openbmc_project.Logging.Entry.Oem` provides a generic
mechanism to attach platform-specific metadata to log entries.

This interface is optional and is intended for cases where additional
information needs to be associated with a log entry beyond the base logging
schema, without modifying or overloading the core interface.

---

### Usage

A component may attach the `Entry.Oem` interface to a log entry object to
provide:

- **OemAdditionalData**

  A dictionary (`dict<string, string>`) containing implementation-defined
  metadata associated with the log entry.

  This acts as a flexible container for structured, namespaced key-value data.

---

### Design Guidelines

- Use this interface as a structured OEM extension, not as a replacement for the
  base logging interface.

- `OemAdditionalData` should contain lightweight metadata only. Large or complex
  data should not be stored inline.

- Keys should follow consistent namespaced conventions (for example,
  `<NAMESPACE>.<KEY>`).

- The content is implementation-specific. Consumers should interpret known keys
  and safely ignore unknown ones.
