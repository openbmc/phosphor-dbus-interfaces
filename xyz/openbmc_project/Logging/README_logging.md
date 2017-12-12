# Introduction
 * Provides a mechanism for logging of events and errors to the journal.
 * Error entry DBus objects are created when an error is reported/committed.
 * Error entries created are persisted and can be retrieved or deleted using the
   REST commands

## Defining errors
### Generic errors
* Generic errors used by applications are defined at
 [phosphor-dbus-interfaces](https://github.com/openbmc/phosphor-dbus-interfaces)
* Generic errors can be used by all the applications by including the generated
  elog-errors.hpp header file.

### Application errors
* There are errors that are not generic and are very specific to the
  application, such errors are defined in the application that uses the error.
* Refer [openpower-debug-collector](https://github.com/openbmc/openpower-debug-collector)

### Error yaml files
 * Every error defined will have an error yaml file and a corresponding error
   metadata yaml file
 * For example:
    - [File.errors.yaml](https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/xyz/openbmc_project/Common/File.errors.yaml)
    - [File.metadata.yaml](https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/xyz/openbmc_project/Common/File.metadata.yaml)
 * Error yaml file captures error name and a one-liner description of the error.
 * Error metadata yaml file captures required data and the format that should be
   supplied for the error by the caller.

## Logging to journal
 * Applications can log debug/error information to the journal using
   the **log** api
   - Refer: [log.hpp](https://github.com/openbmc/phosphor-logging/blob/master/phosphor-logging/log.hpp)
 * Applications can commit errors to the journal using **report** or
  **commit** api
  - Refer:[elog.hpp](https://github.com/openbmc/phosphor-logging/blob/master/phosphor-logging/elog.hpp)

## Delete All interface
* [DeleteAll.interface.yaml](https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/xyz/openbmc_project/Collection/DeleteAll.interface.yaml)
  for deleting all the logging entries when invoked through REST command


## REST commands
### Logging in
 * Before you can do anything you need to first login:
```
export bmc=xx.xx.xx.xx
$curl -c cjar -b cjar -k -X POST -H "Content-Type: application/json" \
-d '{"data": [ "root", "<root password>" ] }' https://$bmc/login
```

### List logging sub-objects recursively
```
$curl -c cjar -b cjar -k https://$bmc/xyz/openbmc_project/logging/list
```

### List logging attributes of child objects recursively
```
$curl -c cjar -b cjar -s  -k  -H 'Content-Type: application/json' \
    -d '{"data" : []}' \
    -X GET https://$bmc///xyz/openbmc_project/logging/enumerate
```

### Delete error
```
$curl -c cjar -b cjar -k -H "Content-Type: application/json" -X POST \
    -d '{"data": []}' \
    https://$bmc/xyz/openbmc_project/logging/entry/<entry num>/action/Delete
```

### Delete all errors
```
$curl -c cjar -b cjar -k -H "Content-Type: application/json" \
    -X POST https://$bmc/xyz/openbmc_project/logging/action/DeleteAll \
    -d "{\"data\": [] }"
```
