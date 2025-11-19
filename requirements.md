# Requirements and Expectations for dbus interfaces

This document outlines requirements and expectations for dbus interfaces. These
are usually specified as requirements due to our dbus architecture or for
consistency in implementations.

## General

### Prefer `size` and `uint64`/`int64` over explicit sizes

Do not over-optimize properties by selecting explicit sizes such as `uint8`
unless there is a strong basis for it (usually driven by hardware or another
protocol's specification).

For countable entities always prefer `size`, which are an sdbusplus implemented
type that maps to the C equivalent of `size_t` on the architecture. For
non-countable values prefer `uint64` or `int64`.

### Avoid use of arbitrary strings

Arbitrary strings should only be utilized for human consumption and never parsed
by code. Any arbitrary string is typically expected to have a description such
as "... can be shown in user interfaces but this field should not be used for
any programmatic interrogation of an object".

### Leverage enumerations instead of strings or magic values

The sdbusplus implementation has built-in support for enumerations, which flow
across the dbus as uniquely encoded string values but has support in the
bindings for automatically converting to a C++ enum type.

In some cases it is useful to have hardware-specific or OEM values for
enumerations. In those cases a property may be a string, but should specify that
the values contained within are to be sdbusplus-enumerations of a specific
pattern. See the [software compatibility][software-compat] and [dump
interface][dump-interface] as two current examples of this.

[software-compat]:
  https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/yaml/xyz/openbmc_project/Software/README.md#compatibility
[dump-interface]:
  https://github.com/openbmc/phosphor-dbus-interfaces/blob/991b2b8bdbc950f2a85aebfc29d1b34ea3264686/yaml/xyz/openbmc_project/Dump/Create.interface.yaml#L25

## Interfaces

## Methods

## Properties

## Signals

## Associations

There are typically two types of associations we use:

- Peer associations.
- Directed associations.

Peer associations are rare, but are used to link a single entity that is
required to be represented in different dbus path hierarchies due to some
overriding aspect of the dbus design.

Directed associations are more common and are used to show a relationship
between two different entities. Though it may at times feel contrived, directed
associations should be considered to have a "primary" and "secondary" end, which
helps establish a pattern for naming consistency. For example, a chassis might
be "containing" (primary) any number of other inventory objects which are
"contained_by" (secondary) the chassis.

### Peer associations should be named with hierarchy names

Consider an entity which is contained at `/.../foo/entity` and
`/.../bar/entity`. The association is what links the `foo` and `bar` aspects of
the entity in the dbus path hierarchy. Accordingly, the association should be
named with end-points "foo" and "bar".

A made-up example of a peer association might be a `Inventory.Processor`,
located under the `.../inventory` hierarchy, and a `Control.Power.Cap` for that
processor, located under the `.../control` hierarchy. The peer association
allows traversal between the `inventory` and `control` namespaces for the single
Processor entity.

### Directed associations should not codify type

The end-point names of an association should not codify the types of the
interfaces pointed to by the association.

- Bad: powered_processor
- Good: powering

### Directed associations should be named with participle verbs

The primary relationship should be a verb with a Present Participle tense
(ending in '-ing'). The secondary relationship should be a verb with a Past
Participle tense (typically ending in '-ed').

The association end-points should be named in a way that the following sentences
are grammatically correct:

- The `{primary element}` is `{primary association}` the `{secondary element}`.
- The `{secondary element}` is `{secondary association}` the
  `{primary element}`.

These correspond to the mapper D-Bus object paths
`{primary element}/{primary association}` with an endpoints property value of
`{secondary element}` and `{secondary element}/{secondary association}` with an
endpoints property value of `{primary element}`.

In some cases it may be required for grammatical correctness to add a
preposition to the secondary association, such as 'by' or 'with'.

### Example for documenting Associations

```yaml
association:
  name: connected_to
  description: >
    Objects that are connected at the other end of the link.
  reverse_name: connecting
  required_endpoint_interfaces:
    - xyz.openbmc_project.Inventory.Item.Cpu
    - xyz.openbmc_project.Inventory.Item.PCIeSwitch
```

In this example the DBus object with
`xyz.openbmc_project.Inventory.Item.PCIeSlot` interface may have a
`connected_to` associtation to another DBus object holding at least ONE OF these
required endpoint interfaces.

### Documenting at both ends of an association

If a DBus interface A is documented to may have an association to a DBus object
holding interface B, interface B must document the reverse association to
interface A.

Additional information on associations is in the [mapper documentation][].

[mapper documentation]:
  https://github.com/openbmc/docs/blob/master/architecture/object-mapper.md#associations
