# AMD Event Model

## Overview

The AMD Event Model defines a structured mechanism for publishing **AMD
vendor-specific Events on D-Bus**.

An AMD Event represents a **single, consumer-facing incident**, derived from
system activity observed elsewhere in the BMC stack and correlated using
AMD-defined error semantics known as **AMD Field Identifiers (AFIDs)**.

AFIDs are AMD-defined identifiers that represent specific classes of events or
error conditions. More information about AFIDs and their semantics can be found
in the
[AMD Field ID Specification](https://docs.amd.com/r/en-US/AMD_Field_ID_70122_v1.0/Introduction)

The model is **schema-driven and registry-backed**. It does not embed raw
diagnostic payloads or transport-specific details. Instead, it projects AMD
semantics by composing a minimal Event object with child objects that represent
diagnosed conditions (AFIDs) and optional diagnostic evidence.

---

## Event Object

An **Event** is the top-level object representing a single AMD-defined incident.

An Event:

- Has a stable, AMD-defined identifier
- Identifies the upstream source that caused the Event to be created
- Serves as an aggregation boundary for diagnosed conditions

The Event interface is intentionally minimal and stable. It does not encode
severity, diagnostics, or vendor-specific error details. Those semantics are
expressed through AFID and diagnostic objects associated with the Event.

---

## AFID Objects

AFID objects represent **AMD Field Identifiers (AFIDs)** associated with an
Event.

An AFID object:

- Corresponds to exactly one AMD-defined AFID
- Represents a diagnosed condition derived during Event realization
- Owns the severity of that condition
- Identifies the affected Field Replaceable Units (FRUs)

AFID objects serve as the primary semantic backbone for representing both simple
and complex AMD events. A single Event may contain one or more AFID objects,
depending on the number of distinct conditions identified.

---

## Diagnostic Evidence (Example: CPER)

Diagnostic objects provide **processed, semantic views** of diagnostic evidence
related to an Event.

One example of such diagnostic evidence is CPER (Common Platform Error Record).
CPER objects represent normalized diagnostic records collected by platform RAS
services.

Key characteristics of diagnostic objects:

- Diagnostic objects are siblings of AFID objects under an Event
- A single diagnostic record may be associated with **one or more AFIDs**
- Associations between diagnostics and AFIDs are expressed explicitly, not
  through object hierarchy
- Raw diagnostic payloads remain owned by their producing services

This model avoids duplication of diagnostic records and reflects the reality
that a single diagnostic record may reference multiple diagnosed conditions.

---

## Object Hierarchy

Event, AFID, and diagnostic objects are associated through object hierarchy and
explicit references.

```text
/com/amd/event/<event-id>
 └── logging/
     ├── afids/
     │   ├── <afid-0>
     │   └── <afid-1>
     └── cper/
         ├── <cper-0>
         └── <cper-1>
```

Consumers discover Events, AFIDs, and diagnostic objects using
`org.freedesktop.DBus.ObjectManager`.

---

## Example: One CPER, Multiple AFIDs

This example illustrates a scenario where a single diagnostic record is
associated with multiple AMD-defined conditions.

- **Incident**: Platform hardware error detected
- **Diagnostic**: One CPER record collected by the RAS service
- **AFIDs**:
  - `AFID-CPU-IF-0003`
  - `AFID-MEM-ECC-0021`

In this case:

- One Event is created to represent the incident
- Multiple AFID objects represent the diagnosed conditions
- A single CPER object references both AFIDs

This structure preserves diagnostic fidelity while allowing each diagnosed
condition to be represented independently.

---

## Summary

- Events represent **incident boundaries**, not diagnoses
- AFID objects represent **AMD Field ID–classified conditions**
- Severity is owned by AFIDs, not Events
- Diagnostic objects (for example, CPER) represent evidence and may reference
  multiple AFIDs
- Structured schemas are defined in YAML, not in D-Bus
- The model is extensible, avoids diagnostic duplication, and supports future
  categories of error reporting
