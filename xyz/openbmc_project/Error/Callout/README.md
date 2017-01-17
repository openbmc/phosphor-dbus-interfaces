## Introduction

A callout is typically an indication of a faulty hardware component in a system.
In openbmc, a callout is defined as any other error, via a YAML file. An example
would be `xyz.openbmc_project.Error.Callout.IIC`, to indicate an IIC callout.

The goal is to have applications post callouts using hardware terminology which
is familiar to them, such as a sysfs entry, or an IIC address. It would be up to
the openbmc error handling component to map such a callout to actual field
replacable units (FRUs) on the system.

## Architecture and usage

An openbmc error has associated metadata, the same is true for a callout. Such
metadata would be defined in the callout YAML interface. Here is an example (for
xyz.openbmc_project.Error.Callout.IIC) :
```
- name: IIC
  meta:
    - str: "CALLOUT_IIC_BUS=%s"
      type: string
    - str: "CALLOUT_IIC_ADDR=%hu"
      type: uint16
```
An application wanting to add an IIC callout will have to provide values for the
metadata fields above. These fields will also let the error handling component
figure out that this is in fact an IIC callout.

A callout is typically associated with an error log. For eg,
`xyz.openbmc_project.Error.Foo` may want to add an IIC callout. This is
indicated in Foo's YAML interface as follows :
```
- name: Foo
  description: this is the error Foo
  inherits:
    - xyz.openbmc_project.Error.Callout.IIC
```
The way this inheritance will be implemented is that, Foo's metadata will
include Callout.IIC's as well, so an application wanting to add an IIC callout
will have to provide values for Foo and IIC metadata. Like mentioned before,
due to the presence of the Callout.IIC metadata, the error handling component
can figure out that the error Foo includes an IIC callout.

Currently defined callout interfaces in turn inherit
`xyz.openbmc_project.Error.Callout.Callout`, which has metadata common to
callouts :
```
- name: Callout
  meta:
    - str: "CALLOUT_PRIORITY=%s"
      type: enum[self.Level]
    - str: "CALLOUT_ERRNO=%d"
      type: int32
    - str: "CALLOUT_DEVICE_PATH=%s"
      type: string
```
This way, say an application wants to express an IIC callout in terms of a
device path, for lack of IIC information. The application can add the callout
metadata fields for both Callout.Callout and Callout.IIC, but provide values
only for Callout.Callout. That way the error handling component can still
decipher this as an IIC callout.
