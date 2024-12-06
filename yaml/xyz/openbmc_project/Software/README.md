# Software Version Management and Image Update

## Overview

There are two types of processes involved in software version management and
code update:

1. _ImageManager_ - This is a process which manages a collection of, likely
   temporary, images located somewhere in a file system. These are images which
   are available on the BMC for update.
2. _ItemUpdater_ - This is a process which manages specific storage elements,
   likely for an inventory item, to determine which software versions are
   installed onto that item. A specific example of this would be a process that
   controls and updates the BIOS flash module for a managed host.

A simple system design would be to include a single _ImageManager_ and two
_ItemUpdater_(s): one for the BMC itself and one for the Host.

### ImageManager

The _ImageManager_ would provide interfaces at `/xyz/openbmc_project/software`
to allow additional images to be added to the BMC, such as Object.Add() for REST
and DownloadViaTFTP() for TFTP. The standard Object.Delete() interface would
also be provided to facilitate removing images which are no longer needed.
Images maintained in the file system would be presented as a corresponding
`/xyz/openbmc_project/software/<id>` object. In addition, the
`xyz.openbmc_project.Common.FilePath` interface would be provided to specify the
location of the image.

It is assumed that the _ImageManager_ has [at least] a bare minimum amount of
parsing knowledge, perhaps due to a common image format, to allow it to populate
all of the properties of `xyz.openbmc_project.Software.Version` and
`xyz.openbmc_project.Inventory.Decorator.Compatible`. _ItemUpdater_(s) will
likely listen for standard D-Bus signals to identify new images being created.

### ItemUpdater

The _ItemUpdater_ is responsible for monitoring for new `Software.Version`
elements being created to identify versions that are applicable to the inventory
element(s) it is managing. The _ItemUpdater_ should dynamically create an
`xyz.openbmc_project.Software.Activation` interface under
`/xyz/openbmc_project/software/`, an association of type
`{active_image,software_version}` between the `Software.Version` and
`Software.Activation` under `/xyz/openbmc_project/software/`, and an association
of type `{activation,item}` between the `Inventory.Item` and
`Software.Activation` under `/xyz/openbmc_project/software/<id>`. Application of
the software image is then handled through the `RequestedActivation` property of
the `Software.Activation` interface.

In many cases, the _ItemUpdater_'s creation of the `Software.Activation`
interface will be at the exact same path as the _ImageManager_'s
`Software.Version` instance (ie. `/xyz/openbmc_project/software/<id>`). This is
appropriate when the software image can be applied to exactly one device in the
system at exactly one storage location. In cases where multiple devices could
updated with the same image or multiple locations in the same device could hold
the same image (such as a primary / secondary flash bank relationship), the
_ItemUpdater_ should create `Software.Activation` interfaces as a sub-path of
the corresponding image, such as `/xyz/openbmc_project/software/<id>/<device>`.

The _ItemUpdater_ should, if possible, also create its own
`xyz.openbmc_project.Software.Version` objects, and appropriate associations for
software versions that are currently present on the managed inventory
element(s). This provides a mechanism for interrogation of the software versions
when the _ImageManager_ no longer contains a copy.

## Details

### Image Identifier

The _ImageManager_ and _ItemUpdater_ should use a common, though perhaps
implementation specific, algorithm for the `<id>` portion of a D-Bus path for
each `Software.Version`. This allows the same software version to be contained
in multiple locations but represented by the same object path.

A reasonable algorithm might be:
`echo <Version.Version> <Compatible.Names> | sha512sum | cut -b 1-8`

### Compatibility

Identifying that a particular Software image is for a particular system element
can be challenging. For the BMC, two different images may both be the same size
but for vastly different hardware. If the image for one system is applied onto
the BMC for another it is quite possible that the image won't even boot
properly. It is therefore important to be able to specify more details than
simply "BMC" or "Host".

Early on implementations used the `Software.Version.Purpose` property and a
custom string in the `Software.ExtendedVersion` to align software images with
appropriate hardware. This lead to an ever-increasing set of `Purpose`
enumeration values and inconsistent implementations of software update routines.

The `Inventory.Decorator.Compatible` interface was introduced to give
identifiers that can be used to map to common software implementations, in a
similar manner to how the Linux Device Tree compatible strings are used.
Software update should leverage these `Compatible.Names` properties to create a
consistent mapping of `Software.Version` instances to the system element the
image is applicable to.

At the same path as the `Software.Version`, an _ImageManager_ should create an
`xyz.openbmc_project.Inventory.Decorator.Compatible` interface containing
strings identifying the system element this image can be applied to.
Correspondingly, the Inventory Item corresponding to the system element should
have the same string in its `Inventory.Decorator.Compatible` interface. These
strings shall be of the following format:

- `<org>.Software.Element.<identifier>.Type.<type>`

Where:

- `<org>` corresponds to the organization owning the `<identifier>`, such as
  `xyz.openbmc_project` or `com.foo_corp`.
- `<identifier>` is a unique name for the element, such as `SystemFoo` or
  `BoardBar`. Typically these would be code names for the hardware element such
  as `Witherspoon`.
- `<type>` is an identifier for sub-element the image corresponds to and is
  documented in the `<org>/Software/Element/<identifier>.interface` file under
  the `Type` enumeration.

The following `<type>` are reserved for a particular meaning:

- BMC - The image is for the BMC contained on that element.
- Host - The image is the primary firmware for the managed host contained on
  that element.

If an image contains sub-sections which can be applied to multiple system
elements, the image should contain `Compatible` strings for each sub-section. It
is expected that the _ItemUpdater_ is aware of how to find the sub-section
appropriate for any element(s) being Activated.

### Activation States

`xyz.openbmc_project.Software.Activation` has a property Activation that can be
in the following states:

1. _NotReady_ - Indicating that the _ItemUpdater_ is still processing the
   version and it is therefore not ready for activation. This might be used on
   an image that has a security header while verification is being performed.
2. _Invalid_ - Indicating that, while the `Software.Version.Purpose` suggested
   the image was valid for a managed element, a detailed analysis by the
   _ItemUpdater_ showed that it was not. Reasons may include image corruption
   detected via CRC or security verification failure. An event may be recorded
   with additional details.
3. _Ready_ - Indicating that the `Software.Version` can be activated.
4. _Activating_ - Indicating that the `Software.Version` is in the process of
   being activated.
5. _Active_ - The `Software.Version` is active on the managed element. Note that
   on systems with redundant storage devices a version might be _Active_ but not
   the primary version.
6. _Failed_ - The `Software.Version` or the storage medium on which it is stored
   has failed. An event may be recorded with additional details.
7. _Staged_ - The `Software.Version` is in staged flash region. This will be
   moved from staged flash region to active flash region upon reset. Staged
   flash region is the designated flash area which is used to store the
   integrity validated firmware image that comes in during firmware update
   process. Note that the staged image is not necessarily a functional firmware.

### Image Apply Time

`xyz.openbmc_project.Software.ApplyTime` has a property called
RequestedApplyTime that indicates when the newly applied software image will be
activated. RequestedApplyTime is a D-Bus property that maps to the "ApplyTime"
property in the Redfish UpdateService schema. Below are the currently supported
values and the value can be supplied through HttpPushUriApplyTime object:

1. _Immediate_ - Indicating that the `Software.Version` needs to be activated
   immediately.
2. _OnReset_ - Indicating that the `Software.Version` needs to be activated on
   the next reset.

### Blocking State Transitions

It is sometimes useful to block a system state transition while activations are
being performed. For example, we do not want to boot a managed host while its
BIOS is being updated. In order to facilitate this, the interface
`xyz.openbmc_project.Software.ActivationBlocksTransition` may be added to any
object with `Software.Activation` to indicate this behavior. See that interface
for more details.

It is strongly suggested that any activations are completed prior to a managed
BMC reboot. This could be facilitated with systemd service specifiers.

### Software Versions

All version identifiers are implementation specific strings. No format should be
assumed.

Some software versions are a collection of images, each with their own version
identifiers. The `xyz.openbmc_project.Software.ExtendedVersion` interface can be
added to any `Software.Version` to express the versioning of the aggregation.

In addition, the `xyz.openbmc_project.Software.MinimumVersion` interface can
communicate the minimum software version that a component must have to operate.
The minimum version check is an optional software feature of the item updater.

### Activation Progress

The `xyz.openbmc_project.Software.ActivationProgress` interface is provided to
show current progress while a software version is _Activating_. It is expected
that an _ItemUpdater_ will dynamically create this interface while the version
is _Activating_ and dynamically remove it when the activation is complete (or
failed).

### Handling Redundancy

The `xyz.openbmc_project.Software.RedundancyPriority` interface is provided to
express the relationship between two (or more) software versions activated for a
single managed element. It is expected that all installed versions are listed as
_Active_ and the `Priority` shows which version is the primary and which are
available for redundancy.

Prior to `Activation`, it can be useful to indicate a desired
`RedundancyPriority`. This can be done by setting the `Priority` on the
`RequestedRedundancyPriority` interface. Some _ItemUpdater_ implementations may
not honor this field or be unable to comply with the request, in which case the
resulting `Activation` may result in one of two conditions: a
`ActivationState = Failed` or an `ActivateState = Active` with a
`RedundancyPriority = 0 (High)`.

### Image Clean Up

An _ItemUpdater_ is responsible for garbage collecting images contained on the
elements it is managing. Often an element can only contain a single image so
this is a natural side-effect of the update process. In other cases, the
_ItemUpdater_ may remove images based on the `RedundancyPriority` assigned to an
image.

The _ImageManager_ should expose `Object.Delete()` methods to remove images from
the BMC filesystem. It is possible that some _ItemUpdater_(s) will call this
method once the `Version` is successfully activated.

In some designs there may be multiple _ItemUpdater_ instances which are handling
update for different system elements, all of which can potentially apply the
same software image (as in a multi-host design). The _ImageManager_ may
optionally monitor the `Software.Activation` signals and actively garbage
collect an image once all `Software.Activation` under the `.../software/<id>`
path are either `Active` or `Staged`.

### Software Settings

The `xyz.openbmc_project.Software.Settings` interface is provided to show the
settings of the given software. The `Software.Settings` should be added to along
side `Software.Version` to represent its state from the same service.

```sh
busctl introspect $SERVICE /xyz/openbmc_project/software/software_0
...
xyz.openbmc_project.Software.Version   interface   -
.Purpose                               property    s
.Version                               property    s
xyz.openbmc_project.Software.Settings  interface   -
.WriteProtected                        property    b
...
```

The _ItemUpdater_ manages the fields such as `WriteProtected` to help provide
information on how the software is managed.

## REST use-cases

### Find all software versions on the system, either active or available

List `/xyz/openbmc_project/software/`. This list can be filtered to just active
listing `.../software/active/` and following the `software_version` association
to retrieve version information. To list just "functional" or running versions
list `/xyz/openbmc_project/software/functional/`.

### Find all software versions on a managed element

List `/xyz/openbmc_project/inventory/.../<item>/activation` association.

### Upload new version via REST

HTTP PUT to `/xyz/openbmc_project/software/`. _ImageManager_ will assign the
`<id>` when called for Object.Add().

### Upload new version via ???

Need additional interfaces defined for alternative upload methods.

### Activate a version

Modify `RequestedActivation` to _Active_ on the desired `Activation`.

### Switch primary image

Set `Priority` to 0 on the desired `RedundancyPriority` interface.
