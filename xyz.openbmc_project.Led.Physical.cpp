#include <algorithm>
#include <sdbusplus/server.hpp>
#include <sdbusplus/exception.hpp>
#include "xyz/openbmc_project/Led/Physical/server.hpp"

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

Physical::Physical(bus::bus& bus, const char* path)
        : _xyz_openbmc_project_Led_Physical_interface(
                bus, path, _interface, _vtable, this)
{
}



auto Physical::state() const ->
        Action
{
    return _state;
}

int Physical::_callback_get_State(
        sd_bus* bus, const char* path, const char* interface,
        const char* property, sd_bus_message* reply, void* context,
        sd_bus_error* error)
{
    using sdbusplus::server::binding::details::convertForMessage;

    try
    {
        auto m = message::message(sd_bus_message_ref(reply));

        auto o = static_cast<Physical*>(context);
        m.append(convertForMessage(o->state()));
    }
    catch(sdbusplus::internal_exception_t& e)
    {
        sd_bus_error_set_const(error, e.name(), e.description());
        return -EINVAL;
    }

    return true;
}

auto Physical::state(Action value) ->
        Action
{
    if (_state != value)
    {
        _state = value;
        _xyz_openbmc_project_Led_Physical_interface.property_changed("State");
    }

    return _state;
}

int Physical::_callback_set_State(
        sd_bus* bus, const char* path, const char* interface,
        const char* property, sd_bus_message* value, void* context,
        sd_bus_error* error)
{
    try
    {
        auto m = message::message(sd_bus_message_ref(value));

        auto o = static_cast<Physical*>(context);

        std::string v{};
        m.read(v);
        o->state(convertActionFromString(v));
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
namespace Physical
{
static const auto _property_State =
    utility::tuple_to_array(message::types::type_id<
            std::string>());
}
}
auto Physical::dutyOn() const ->
        uint8_t
{
    return _dutyOn;
}

int Physical::_callback_get_DutyOn(
        sd_bus* bus, const char* path, const char* interface,
        const char* property, sd_bus_message* reply, void* context,
        sd_bus_error* error)
{
    using sdbusplus::server::binding::details::convertForMessage;

    try
    {
        auto m = message::message(sd_bus_message_ref(reply));

        auto o = static_cast<Physical*>(context);
        m.append(convertForMessage(o->dutyOn()));
    }
    catch(sdbusplus::internal_exception_t& e)
    {
        sd_bus_error_set_const(error, e.name(), e.description());
        return -EINVAL;
    }

    return true;
}

auto Physical::dutyOn(uint8_t value) ->
        uint8_t
{
    if (_dutyOn != value)
    {
        _dutyOn = value;
        _xyz_openbmc_project_Led_Physical_interface.property_changed("DutyOn");
    }

    return _dutyOn;
}

int Physical::_callback_set_DutyOn(
        sd_bus* bus, const char* path, const char* interface,
        const char* property, sd_bus_message* value, void* context,
        sd_bus_error* error)
{
    try
    {
        auto m = message::message(sd_bus_message_ref(value));

        auto o = static_cast<Physical*>(context);

        uint8_t v{};
        m.read(v);
        o->dutyOn(v);
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
namespace Physical
{
static const auto _property_DutyOn =
    utility::tuple_to_array(message::types::type_id<
            uint8_t>());
}
}
auto Physical::color() const ->
        Palette
{
    return _color;
}

int Physical::_callback_get_Color(
        sd_bus* bus, const char* path, const char* interface,
        const char* property, sd_bus_message* reply, void* context,
        sd_bus_error* error)
{
    using sdbusplus::server::binding::details::convertForMessage;

    try
    {
        auto m = message::message(sd_bus_message_ref(reply));

        auto o = static_cast<Physical*>(context);
        m.append(convertForMessage(o->color()));
    }
    catch(sdbusplus::internal_exception_t& e)
    {
        sd_bus_error_set_const(error, e.name(), e.description());
        return -EINVAL;
    }

    return true;
}

auto Physical::color(Palette value) ->
        Palette
{
    if (_color != value)
    {
        _color = value;
        _xyz_openbmc_project_Led_Physical_interface.property_changed("Color");
    }

    return _color;
}

int Physical::_callback_set_Color(
        sd_bus* bus, const char* path, const char* interface,
        const char* property, sd_bus_message* value, void* context,
        sd_bus_error* error)
{
    try
    {
        auto m = message::message(sd_bus_message_ref(value));

        auto o = static_cast<Physical*>(context);

        std::string v{};
        m.read(v);
        o->color(convertPaletteFromString(v));
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
namespace Physical
{
static const auto _property_Color =
    utility::tuple_to_array(message::types::type_id<
            std::string>());
}
}


namespace
{
/** String to enum mapping for Physical::Action */
static const std::tuple<const char*, Physical::Action> mappingPhysicalAction[] =
        {
            std::make_tuple( "xyz.openbmc_project.Led.Physical.Action.Off",                 Physical::Action::Off ),
            std::make_tuple( "xyz.openbmc_project.Led.Physical.Action.On",                 Physical::Action::On ),
            std::make_tuple( "xyz.openbmc_project.Led.Physical.Action.Blink",                 Physical::Action::Blink ),
        };

} // anonymous namespace

auto Physical::convertActionFromString(std::string& s) ->
        Action
{
    auto i = std::find_if(
            std::begin(mappingPhysicalAction),
            std::end(mappingPhysicalAction),
            [&s](auto& e){ return 0 == strcmp(s.c_str(), std::get<0>(e)); } );
    if (std::end(mappingPhysicalAction) == i)
    {
        throw sdbusplus::exception::InvalidEnumString();
    }
    else
    {
        return std::get<1>(*i);
    }
}

std::string convertForMessage(Physical::Action v)
{
    auto i = std::find_if(
            std::begin(mappingPhysicalAction),
            std::end(mappingPhysicalAction),
            [v](auto& e){ return v == std::get<1>(e); });
    return std::get<0>(*i);
}

namespace
{
/** String to enum mapping for Physical::Palette */
static const std::tuple<const char*, Physical::Palette> mappingPhysicalPalette[] =
        {
            std::make_tuple( "xyz.openbmc_project.Led.Physical.Palette.Unknown",                 Physical::Palette::Unknown ),
            std::make_tuple( "xyz.openbmc_project.Led.Physical.Palette.Red",                 Physical::Palette::Red ),
            std::make_tuple( "xyz.openbmc_project.Led.Physical.Palette.Green",                 Physical::Palette::Green ),
            std::make_tuple( "xyz.openbmc_project.Led.Physical.Palette.Blue",                 Physical::Palette::Blue ),
            std::make_tuple( "xyz.openbmc_project.Led.Physical.Palette.Yellow",                 Physical::Palette::Yellow ),
        };

} // anonymous namespace

auto Physical::convertPaletteFromString(std::string& s) ->
        Palette
{
    auto i = std::find_if(
            std::begin(mappingPhysicalPalette),
            std::end(mappingPhysicalPalette),
            [&s](auto& e){ return 0 == strcmp(s.c_str(), std::get<0>(e)); } );
    if (std::end(mappingPhysicalPalette) == i)
    {
        throw sdbusplus::exception::InvalidEnumString();
    }
    else
    {
        return std::get<1>(*i);
    }
}

std::string convertForMessage(Physical::Palette v)
{
    auto i = std::find_if(
            std::begin(mappingPhysicalPalette),
            std::end(mappingPhysicalPalette),
            [v](auto& e){ return v == std::get<1>(e); });
    return std::get<0>(*i);
}

const vtable::vtable_t Physical::_vtable[] = {
    vtable::start(),
    vtable::property("State",
                     details::Physical::_property_State
                        .data(),
                     _callback_get_State,
                     _callback_set_State,
                     vtable::property_::emits_change),
    vtable::property("DutyOn",
                     details::Physical::_property_DutyOn
                        .data(),
                     _callback_get_DutyOn,
                     _callback_set_DutyOn,
                     vtable::property_::emits_change),
    vtable::property("Color",
                     details::Physical::_property_Color
                        .data(),
                     _callback_get_Color,
                     _callback_set_Color,
                     vtable::property_::emits_change),
    vtable::end()
};

} // namespace server
} // namespace Led
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

