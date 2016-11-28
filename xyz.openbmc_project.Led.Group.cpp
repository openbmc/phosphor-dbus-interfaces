#include <algorithm>
#include <sdbusplus/server.hpp>
#include <sdbusplus/exception.hpp>
#include "xyz/openbmc_project/Led/Group/server.hpp"

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Led
{
namespace server
{

Group::Group(bus::bus& bus, const char* path)
        : _xyz_openbmc_project_Led_Group_interface(
                bus, path, _interface, _vtable, this)
{
}



auto Group::asserted() const ->
        bool
{
    return _asserted;
}

int Group::_callback_get_Asserted(
        sd_bus* bus, const char* path, const char* interface,
        const char* property, sd_bus_message* reply, void* context,
        sd_bus_error* error)
{
    using sdbusplus::server::binding::details::convertForMessage;

    try
    {
        auto m = message::message(sd_bus_message_ref(reply));

        auto o = static_cast<Group*>(context);
        m.append(convertForMessage(o->asserted()));
    }
    catch(sdbusplus::internal_exception_t& e)
    {
        sd_bus_error_set_const(error, e.name(), e.description());
        return -EINVAL;
    }

    return true;
}

auto Group::asserted(bool value) ->
        bool
{
    if (_asserted != value)
    {
        _asserted = value;
        _xyz_openbmc_project_Led_Group_interface.property_changed("Asserted");
    }

    return _asserted;
}

int Group::_callback_set_Asserted(
        sd_bus* bus, const char* path, const char* interface,
        const char* property, sd_bus_message* value, void* context,
        sd_bus_error* error)
{
    try
    {
        auto m = message::message(sd_bus_message_ref(value));

        auto o = static_cast<Group*>(context);

        bool v{};
        m.read(v);
        o->asserted(v);
    }
    catch(sdbusplus::internal_exception_t& e)
    {
        sd_bus_error_set_const(error, e.name(), e.description());
        return -EINVAL;
    }

    return true;
}

namespace details
{
namespace Group
{
static const auto _property_Asserted =
    utility::tuple_to_array(message::types::type_id<
            bool>());
}
}


const vtable::vtable_t Group::_vtable[] = {
    vtable::start(),
    vtable::property("Asserted",
                     details::Group::_property_Asserted
                        .data(),
                     _callback_get_Asserted,
                     _callback_set_Asserted,
                     vtable::property_::emits_change),
    vtable::end()
};

} // namespace server
} // namespace Led
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

