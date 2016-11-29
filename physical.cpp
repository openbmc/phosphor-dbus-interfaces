#include <iostream>
#include <cstring>
#include <unistd.h>
#include <algorithm>
#include <sdbusplus/message.hpp>
#include <sdbusplus/bus.hpp>
#include <sdbusplus/server/object.hpp>
#include "physical.hpp"
#include "config.h"

namespace phosphor
{
namespace led
{

/** @brief Overloaded State Property Setter function */
auto Physical::state(Action value) -> Action
{
    iv_action = value;
    // Set the base class's state to actuals since the getter
    // operation is handled there.
    return sdbusplus::xyz::openbmc_project::Led::server::
                           Physical::state(driveLED());
}

/** @brief Overloaded DutyOn Property Setter function */
auto Physical::dutyOn(uint8_t value) -> uint8_t
{
    iv_dutyOn = value;
    // Set the base class's state to actuals since the getter
    // operation is handled there.
    return sdbusplus::xyz::openbmc_project::Led::server::
                           Physical::dutyOn(iv_dutyOn);
}

/** @brief Overloaded Color Property Setter function */
auto Physical::color(Palette value) -> Physical::Palette
{
    iv_color = value;
    // Set the base class's state to actuals since the getter
    // operation is handled there.
    return sdbusplus::xyz::openbmc_project::Led::server::
                           Physical::color(iv_color);
}

/** @brief Run through the map and apply action on the LEDs */
Physical::Action Physical::driveLED()
{
    // Replace with actual code.
    std::cout << " Action is reached , iv_duty : " << iv_dutyOn << std::endl;
    return iv_action;
}

/** @brief Initialize the bus and announce services */
Physical::Physical(
    sdbusplus::bus::bus &&bus,
    const char* busName,
    const char* objPath,
    std::string ledName,
    std::string ledPath) :

    sdbusplus::server::object::object<
    sdbusplus::xyz::openbmc_project::Led::server::Physical>(
            bus, objPath),
    iv_bus(std::move(bus)),
    iv_ObjManager(sdbusplus::server::manager::manager(bus, objPath)),

    iv_name(ledName),
    iv_path(ledPath),
    iv_action(Action::Off),
    iv_color(Palette::Unknown),
    iv_dutyOn(50)
{
    /** @brief Claim the bus */
    iv_bus.request_name(busName);
    run();
}

/** @brief Wait for client requests */
void Physical::run()
{
    while(true)
    {
        try
        {
            iv_bus.process_discard();
            iv_bus.wait();
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}

} // namespace led
} // namespace phosphor
