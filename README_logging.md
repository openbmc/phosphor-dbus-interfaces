# Introduction
* Provides mechanism for logging of events and errors to the journal.
* Error entry DBus objects are created when an error is reported/commited.
* Error entries created are persisted and can be retrieved or deleted using the
  **REST** commands

```
## Defining errors
### Generic errors
* Generic errors used by applications are defined at
  https://github.com/openbmc/phosphor-dbus-interfaces
* Generic errors can be used by all the applications by including the generated
  elog-errors.hpp header file.

### Application errors
* There are errors that are not generic and are very specific to the
  application, such errors are defined in the application that uses the error.
* For example: https://github.com/openbmc/openpower-debug-collector

### Error yaml files
* Every error defined will have an error yaml file and a corresponding error
  metadata yaml file
* For example:
  * https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/xyz/openbmc_project/Common/File.errors.yaml
  * https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/xyz/openbmc_project/Common/File.metadata.yaml
* Error yaml file captures error name and a one line description about the error
* Error metadata yaml file captures required data and format that should be
  supplied for the error by the caller

## Logging to journal
* Applications can log debug/error information to the journal using
  the **log** api
  * https://github.com/openbmc/phosphor-logging/blob/master/phosphor-logging/log.hpp
* Applications can commit errors to the journal using **report** or
  **commit** api
  * https://github.com/openbmc/phosphor-logging/blob/master/phosphor-logging/elog.hpp

## Delete All interface
* Logging manager defined at **https://github.com/openbmc/phosphor-logging/blob/master/log_manager.hpp**
  implements DeleteAll interface
  **https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/xyz/openbmc_project/Collection/DeleteAll.interface.yaml**
  to cater for deleting all the logging entries when invoked through REST
  command


## REST commands
### Logging in
* Before you can do anything you need to first login:
```
curl -c cjar -k -X POST -H "Content-Type: application/json" \
-d '{"data": [ "root", "<root password>" ] }' https://<BMC IP>/login
```

### List logging child objects recursively
```
curl -b cjar -k https://<BMC IP>/xyz/openbmc_project/logging/list
```

### List logging attributes of child objects recursively
```
curl -s  -b cjar -k  -H 'Content-Type: application/json' -d '{"data" : []}' -X GET \
https://<BMC IP>///xyz/openbmc_project/logging/enumerate
```

### Delete error
```
curl -c cjar -b cjar -k -H "Content-Type: application/json" -X POST \
-d '{"data": []}' \
https://<BMC IP>/xyz/openbmc_project/logging/entry/<entry num>/action/Delete
```

### Delete all errors
```
curl -c cjar -b cjar -k -H "Content-Type: application/json" \
-X POST https://<<BMC IP>/xyz/openbmc_project/logging/action/deleteAll \
-d "{\"data\": [] }"
```
