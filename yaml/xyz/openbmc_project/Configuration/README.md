Interfaces under this subdirectory are written for compatibility with
[entity-manager][entity-manager]. Entity-manager currently creates these style
of objects from a JSON configuration, which doesn't support some of the type
expectations we typically use elsewhere in this repository. Any types and
property names here should not be used as a patterns to emulate elsewhere in the
tree.

It is hoped that in the future entity-manager will be refactored to closer align
with the dbus conventions used elsewhere in the project.

[entity-manager]: https://github.com/openbmc/entity-manager
