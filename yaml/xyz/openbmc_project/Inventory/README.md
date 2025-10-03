# Inventory Guidelines

Inventory interfaces can host a number of properties that many not be supported
on a given system. If all properties on an interface are not supported,
applications shall omit the interface from their supported interfaces list.

If the properties on an interface are partially supported, then shall be
populated with the appropriate tombstone to indicate their non-presence. If a
property is not supported, it shall be populated with NOTSUPPORTED. If the
string property is supported but currently unavailable, it shall be populated
with an empty string "".

Enumeration properties will include an enum value for not supported, and not
available as required.

Integer values shall describe their unavailable values based on what values are
available for that property.
