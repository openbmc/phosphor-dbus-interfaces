# Requirements and Expectations for dbus interfaces

This document outlines requirements and expectations for dbus interfaces. These
are usually specified as requirements due to our dbus architecture or for
consistency in implementations.

## 1. General Requirements

### 1.1 Type Selection

- Prefer `size` and `uint64`/`int64` over explicit sizes
- Use `size` for countable entities (maps to C's `size_t`)
- Use `uint64` or `int64` for non-countable values
- Avoid explicit sizes like `uint8` unless required by hardware or protocol
  specifications

**Example**

```yaml
# Good: Using size for countable entities
properties:
  - name: MaxReports
    type: size
    description: >
      Number of supported reports.

  # Good: Using uint64 for non-countable values
  - name: Timestamp
    type: uint64
    description: >
      Timestamp in microseconds since epoch.

  # Avoid unless required by hardware/protocol:
  - name: RegisterValue
    type: uint8
    description: >
      Hardware register value required by specification.
```

### 1.2 String Usage

- Avoid arbitrary strings for programmatic use
- Use strings only for human consumption and display
- Include clear documentation when strings are for display only

**Example**

```yaml
# Good: String for human consumption
properties:
  - name: PrettyName
  type: string
  description: >
    Human readable name for display purposes only. This field should not
    be used for programmatic interrogation of the object.

# Bad: Arbitrary string for programmatic use
  - name: State
  type: string  # Should be an enumeration instead
  description: >
    Current state of the device.
```

### 1.3 Enumeration Guidelines

- Use enumerations for all fixed sets of values
- Leverage sdbusplus enumeration support
- Use instead of magic strings/numbers
- Document default values
- For hardware/OEM-specific values, use string properties with specified
  enumeration patterns. See the
  [dump interface](https://github.com/openbmc/phosphor-dbus-interfaces/blob/991b2b8bdbc950f2a85aebfc29d1b34ea3264686/yaml/xyz/openbmc_project/Dump/Create.interface.yaml#L25)
  as an example of this.

**Example**

```yaml
# Good
enumerations:
  - name: State
  description: >
    Possible states of the device.
  values:
    - name: Running
    description: >
      Device is operational.
    - name: Stopped
    description: >
      Device is not operational.

# Bad
properties:
  - name: State
  type: string  # Should be enum
  description: >
    State can be "Running" or "Stopped".
```

## 2. Implementation Guidelines

- Document required interfaces and their combinations
- Specify ObjectManager location and requirements
- Include path and service requirements
- Document optional interfaces

**Example**

```yaml
description: >
  Implement this interface to provide report inspection features. An
  implementation service should additionally implement
  xyz.openbmc_project.Object.Delete for deletion of individual report objects.
```

```yaml
description: >
  Implement to provide basic item attributes. Required by all objects within the
  inventory namespace. Any service implementing Inventory.Item on one or more
  objects must implement org.freedesktop.DBus.ObjectManager on
  /xyz/openbmc_project/inventory.
```

## 3. Interface Documentation

- Document the purpose and scope of the interface
- Each interface should have a clear, single purpose
- Don't create interfaces just to map external APIs (e.g., Redfish) 1:1
- Document where the interface should be implemented (object paths)
- Clearly specify who should implement the interface
- Indicate who should use/consume the interface
- Specify any companion interfaces that must be implemented
- Search existing interfaces before creating new ones
- Extend existing interfaces when possible
- Place new interfaces under existing hierarchies:

```
xyz/openbmc_project/
├── Control/  # Control interfaces
├── State/ # State/status interfaces
├── Sensor/  # Sensor interfaces
├── Inventory/ # Static information
└── Common/  # Shared interfaces
```

**Example**

### Good Example: Clear Implementation Requirements/Single Purpose

```yaml
description: >
  Implement to notify the creation of new dump. This interface is used when a
  dump is already created and ready to be offloaded. Any OpenBMC implementation
  must provide exactly one implementation of com.ibm.Dump.Notify on
  /xyz/openbmc_project/dump.
```

### Bad Example: Multiple Unrelated Responsibilities

```yaml
description: >
  Interface for temperature sensor and fan control. Also handles LED status and
  power management.
```

### Bad Example: Direct 1:1 Redfish Mapping

```yaml
description: >
  Maps to Redfish Thermal.v1_7_1.json schema. Properties match Redfish exactly.
```

### Bad Example: Vague Implementation Requirements

```yaml
description: >
  Implement to provide temperature readings. Should update regularly.
```

### Good Example: Companion Interface Requirements:

```yaml
description: >
  Implement to provide certificate management features. An implementation
  service should additionally implement xyz.openbmc_project.Object.Delete to
  allow the deletion of individual certificate objects.
```

### Good Example: Consumer/Usage Documentation:

```yaml
description: >
  Provides methods for supported consoles in the system. This interface should
  be used to retrieve the console data. Any application consuming the privilege
  mapping should not cache the object path and use the GetManagedObjects method
  on the org.freedesktop.DBus.ObjectManager interface to figure out the D-Bus
  object path associated with the group name.
```

## 5. Properties

- Use clear, descriptive names
- Choose appropriate types
- Use `readonly` for properties that shouldn't be modified externally
- Use `const` for properties that never change during runtime
- Always provide default values where appropriate
- Use `object_path` for D-Bus path references
- Use `set` instead of `array` for unique value collections
- Don't prefix property name with interface name
- Group related properties logically
- Use D-Bus errors instead of status code to denote failures in get/set

**Example**

```yaml
properties:
# Runtime constant value
  - name: MaxValue
  type: double
  flags:
    - readonly
  description: >
    Maximum supported value.

# Never changes after creation
  - name: SerialNumber
  type: string
  flags:
    - const
  description: >
    Hardware serial number.

# Modifiable with default
  - name: Enabled
  type: boolean
  default: false
  description: >
    Whether feature is enabled.
```

```yaml
# Good
properties:
  - name: value
  - name: maxValue
  - name: minValue

# Bad
properties:
  - name: SensorValue  # Wrong case
  - name: SensorMaxValue # Unnecessary prefix
  - name: SensorMinValue # Unnecessary prefix
```

```yaml
properties:
  - name: SupportedFeatures
  type: set[enum[self.Feature]]
  description: >
    Set of supported features. Using set ensures uniqueness.

  - name: RelatedObjects
  type: array[object_path]
  description: >
    List of related D-Bus objects.
```

## 5. Methods

- Methods should be used sparingly - even in the case of "actions", it is
  possible to use properties. See, for example,
  [Chassis power transition](https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/yaml/xyz/openbmc_project/State/Chassis.interface.yaml#L4).
  Properties are preferred as they enable implicit progress monitoring through
  signals
- Multiple input parameters passed to an "action" is one example where a method
  is preferred, for example -
  [Create error log](https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/yaml/xyz/openbmc_project/Logging/Create.interface.yaml#L7)
- Methods must be async - this implies they must return, typically, an
  `object_path` to monitor progress. For example -
  [Dump create](https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/yaml/xyz/openbmc_project/Dump/Create.interface.yaml#L34)
- Use D-Bus errors instead of status code to denote failures

**Example**

## 6. Associations and Relationships

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

Additional information on associations is in the
[mapper documentation](https://github.com/openbmc/docs/blob/master/architecture/object-mapper.md#associations).

### Peer associations should be named with hierarchy names

[](https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/requirements.md#peer-associations-should-be-named-with-hierarchy-names)

Consider an entity which is contained at `/.../foo/entity` and
`/.../bar/entity`. The association is what links the `foo` and `bar` aspects of
the entity in the dbus path hierarchy. Accordingly, the association should be
named with end-points "foo" and "bar".

A made-up example of a peer association might be a `Inventory.Processor`,
located under the `.../inventory` hierarchy, and a `Control.Power.Cap` for that
processor, located under the `.../control` hierarchy. The peer association
allows traversal between the `inventory` and `control` namespaces for the single
Processor entity.

- The end-point names of an association should not codify the types of the
  interfaces pointed to by the association.
  - Bad: powered_processor
  - Good: powering
- Directed associations should be named with participle verbs
  - The primary relationship should be a verb with a Present Participle tense
    (ending in '-ing').
  - The secondary relationship should be a verb with a Past Participle tense
    (typically ending in '-ed').
- The association end-points should be named in a way that the following
  sentences are grammatically correct

  - The `{primary element}` is `{primary association}` the
    `{secondary element}`.
  - The `{secondary element}` is `{secondary association}` the
    `{primary element}`.
  - These correspond to the mapper D-Bus object paths
    `{primary element}/{primary association}` with an endpoints property value
    of `{secondary element}` and `{secondary element}/{secondary association}`
    with an endpoints property value of `{primary element}`.
  - In some cases it may be required for grammatical correctness to add a
    preposition to the secondary association, such as 'by' or 'with'.

- Include reverse associations when needed

- Look for standard patterns in
  [Inventory.Item](https://github.com/openbmc/phosphor-dbus-interfaces/blob/master/yaml/xyz/openbmc_project/Inventory/Item.interface.yaml)

## 7. Error Handling and Events

- Define specific error conditions with severity and metadata
- Include clear event naming and trigger conditions
- Document signal purpose and parameters
- Avoid using `InternalFailure`
- Prefer crashing for truly internal errors (to get core dumps)

**Example**

```yaml
errors:
  - name: InvalidSensorReading
  severity: warning
  errno: EIO
  metadata:
    - name: SensorName
    type: object_path

events:
  - name: SensorReadingNormalRange
  metadata:
    - name: SensorName
    type: object_path
  - name: ReadingValue
  type: double

signals:
  - name: Completion
  description: >
    Signal indicating completion of mount or unmount action.
  properties:
    - name: Result
    type: int32
```

```yaml
# Good: Specific errors
errors:
  - xyz.openbmc_project.Common.Error.NotAllowed
  description: >
    Operation not allowed in current state.

  - xyz.openbmc_project.Common.Error.InvalidArgument
  description: >
    Provided argument is invalid.

# Bad: Generic error
errors:
  - xyz.openbmc_project.Common.Error.InternalFailure
  description: >
    Something went wrong internally.  # Too vague
```
