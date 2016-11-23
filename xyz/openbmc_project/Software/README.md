# Software Level Management and Image Update

## Overview

There are two types of processes involved in software level management and
code update:

1. *ImageManager* - This is a process which manages a collection of, likely
                    temporary, images located somewhere in a file system.
                    These are images which are available on the BMC for update.
2. *ItemUpdater* - This is a process which manages specific storage elements,
                   likely for an inventory item, to determine which software
                   levels are installed onto that item.  A specific example of
                   this would be a process that controls and updates the BIOS
                   flash module for a managed host.

A simple system design would be to include a single *ImageManager* and two
*ItemUpdater*s: one for the BMC itself and one for the Host.

### ImageManager

The *ImageManager* would provide interfaces at `/xyz/openbmc_project/software`
to allow additional images to be added to the BMC, such as Object.Add() for
REST and DownloadViaTFTP() for TFTP.  The standard Object.Delete() interface
would also be provided to facilitate removing images which are no longer
needed.  Images maintained in the file system would be presented as a
corresponding `/xyz/openbmc_project/software/<id>` object.

It is assumed that the *ImageManager* has [at least] a bare minimum amount of
parsing knowledge, perhaps due to a common image format, to allow it to
populate all of the properties of `xyz.openbmc_project.Software.Level`.
*ItemUpdater*s will likely listen for standard dbus signals to identify new
images being created.

### *ItemUpdater*

The *ItemUpdater* is responsible for monitoring for new `Software.Level` elements
being created to identify levels that are applicable to the inventory
element(s) it is managing.  The *ItemUpdater* should dynamically create
an `xyz.openbmc_project.Software.Activation` interface under
`/xyz/openbmc_project/software/active/`, an association of type
`{activation,software_level}` between the `Software.Level` and
`Software.Activation`, and an association of type `{active_image,item}` between
the `Inventory.Item` and `Software.Activation`.  Application of the software
image is then handled through the `RequestedActivation` property of the
`Software.Activation` interface.

The *ItemUpdater* should, if possible, also create its own
`xyz.openbmc_project.Software.Level` objects, and appropriate associations
for software levels that are currently present on the managed inventory
element(s).  This provides a mechanism for interrogation of the
software levels when the *ImageManager* no longer contains a copy.

## Details

### Image Identifier

The *ImageManager* and *ItemUpdater* should use a common, though perhaps
implementation specific, algorithm for the `<id>` portion of a dbus path for
each `Software.Level`.  This allows the same software level to be contained
in multiple locations but represented by the same object path.

A reasonable algorithm might be:
`echo <Level.Level> <Level.Purpose> | sha512sum | cut -b 1-8`

> TODO: May need an issue against the REST server to 'merge' two copies of
>       a single dbus object into a single REST object.

### Activation States

`xyz.openbmc_project.Software.Activation` has a property Activation that can
be in the following states:

1. *NotReady* - Indicating that the *ItemUpdater* is still processing the
                level and it is therefore not ready for activation.  This
                might be used on an image that has a security header while
                verification is being performed.
2. *Invalid* - Indicating that, while the `Software.Level.Purpose` suggested
               the image was valid for a managed element, a detailed analysis
               by the *ItemUpdater* showed that it was not.  Reasons may
               include image corruption detected via CRC or security
               verification failure.  An event may be recorded with additional
               details.
3. *Ready* - Indicating that the `Software.Level` can be activated.
4. *Activating* - Indicating that the `Software.Level` is in the process of
                  being activated.
5. *Active* - The `Software.Level` is active on the managed element.  Note that
              on systems with redundant storage devices an level might be
              *Active* but not the primary level.
6. *Failed* - The `Software.Level` or the storage medium on which it is stored
              has failed.  An event may be recorded with additional details.

### Blocking State Transitions

It is sometimes useful to block a system state transition while activations
are being performed.  For example, we do not want to boot a managed host while
its BIOS is being updated.  In order to facilitate this, the interface
`xyz.openbmc_project.Software.ActivationBlocksTransition` may be added to any
object with `Software.Activation` to indicate this behavior.  See that
interface for more details.

It is strongly suggested that any activations are completed prior to a managed
BMC reboot.  This could be facilitated with systemd service specifiers.

### Software Versions

All version identifiers are implementation specific strings.  No format
should be assumed.

Some software levels are a collection of images, each with their own version
identifiers.  The `xyz.openbmc_project.Software.ExtendedVersion` interface
can be added to any `Software.Level` to express the versioning of the
aggregation.

### Activation Progress

The `xyz.openbmc_project.Software.ActivationProgress` interface is provided
to show current progress while a software level is *Activating*.  It is
expected that an *ItemUpdater* will dynamically create this interface while
the level is *Activating* and dynamically remove it when the activation is
complete (or failed).

### Handling Redundancy

The `xyz.openbmc_project.Software.RedundancyPriority` interface is provided to
express the relationship between two (or more) software levels activated for
a single managed element.  It is expected that all installed levels are listed
as *Active* and the `Priority` shows which level is the primary and which are
available for redundancy.

## REST use-cases

### Find all software levels on the system, either active or available.

List `/xyz/openbmc_project/software/`.  This list can be filtered to just
active listing `.../software/active/` and following the `software_level`
association to retrieve version information.

### Find all software levels on a managed element.

List `/xyz/openbmc_project/inventory/.../<item>/active_image` association.

### Upload new level via REST

HTTP PUT to `/xyz/openbmc_project/software/`.  *ImageManager* will assign the
`<id>` when called for Object.Add().

### Upload new level via ???

Need additional interfaces defined for alternative upload methods.

### Activate a level.

Modify `RequestedActivation` to *Active* on the desired `Activation`.

### Switch primary image.

Set `Priority` to 0 on the desired `RedundancyPriority` interface.

