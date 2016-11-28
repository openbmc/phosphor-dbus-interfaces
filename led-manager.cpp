#include <iostream>
#include <cstring>
#include <unistd.h>
#include <algorithm>
#include <sdbusplus/vtable.hpp>
#include <sdbusplus/message.hpp>
#include <sdbusplus/bus.hpp>
#include <sdbusplus/server/object.hpp>
#include "led-manager.hpp"
#include "led-gen.hpp"
#include "config.h"

namespace phosphor
{
namespace led
{

std::set<Group::group*> Group::cv_AssertedGroups;
Group::group Group::cv_CurrentState;
sdbusplus::bus::bus Group::cv_bus(sdbusplus::bus::new_system());
sdbusplus::server::manager::manager Group::cv_ObjManager(
    Group::cv_bus, OBJPATH);

/** @brief Overloaded Property Setter function */
auto Group::asserted(bool value) -> bool
{
    auto group = strrchr(iv_path.c_str(), '/');
    if (group)
    {
        // Removing the starting '/' in /group
        group++;
    }
    // Set the base class's asserted to 'true' since the getter
    // operation is handled there.
    sdbusplus::xyz::openbmc_project::Led::server::Group::asserted(value);
    return setGroupState(group, value);
}

// Assert -or- De-assert
bool Group::setGroupState(const std::string& name, const bool& assert)
{
    if (assert)
    {
        cv_AssertedGroups.insert(&cv_LedMap[name]);
    }
    else
    {
        auto search = cv_AssertedGroups.find(&cv_LedMap[name]);
        if (search != cv_AssertedGroups.end())
        {
            cv_AssertedGroups.erase(&cv_LedMap[name]);
        }
        else
        {
            throw std::runtime_error("Group not present");
        }
    }
    return driveLEDs();
}

/** @brief Run through the map and apply action on the LEDs */
bool Group::driveLEDs()
{
    // This will contain the union of what's already in the asserted group
    group desiredState {};
    for(auto& grp : cv_AssertedGroups)
    {
        std::set_union(grp->begin(), grp->end(), grp->begin(), grp->end(),
                       std::inserter(desiredState, desiredState.begin()));
    }

    // Always Do execute Turn Off and then Turn on since we have the Blink
    // taking priority over -on-
    group ledsToAssert {};
    group ledsToTurnOff {};

    std::set_difference(cv_CurrentState.begin(), cv_CurrentState.end(),
                        desiredState.begin(), desiredState.end(),
                        std::inserter(ledsToTurnOff, ledsToTurnOff.begin()));
    if(ledsToTurnOff.size())
    {
        std::cout << "Turning off LEDs" << std::endl;
        for (auto& it: ledsToTurnOff)
        {
            std::cout << "\t{" << it.name << "::" << it.action << "}"
                      << std::endl;
        }

        // If we previously had a FRU in ON state , and then if there was a
        // request to make it blink, the end state would now be blink.
        // If we either turn off blink / fault, then we need to go back to its
        // previous state.
        std::set_intersection(desiredState.begin(), desiredState.end(),
                              ledsToTurnOff.begin(), ledsToTurnOff.end(),
                              std::inserter(ledsToAssert, ledsToAssert.begin()),
                              ledComp);

        if (ledsToAssert.size())
        {
            std::cout << "Asserting LEDs again" << std::endl;
            for (auto& it: ledsToAssert)
            {
                std::cout << "\t{" << it.name << "::" << it.action << "}"
                          << std::endl;
            }
        }
    }

    // Turn on these
    ledsToAssert.clear();
    std::set_difference(desiredState.begin(), desiredState.end(),
                        cv_CurrentState.begin(), cv_CurrentState.end(),
                        std::inserter(ledsToAssert, ledsToAssert.begin()));

    if(ledsToAssert.size())
    {
        std::cout << "Asserting LEDs" << std::endl;
        for (auto& it: ledsToAssert)
        {
            std::cout << "\t{" << it.name << "::" << it.action << "}"
                      << std::endl;
        }
    }

    // Done.. Save the latest and greatest.
    cv_CurrentState.clear();
    cv_CurrentState = desiredState;

    return true;
}

/** @brief Initialize the bus and announce services */
Group::Group(
    const char* busName,
    const char* objPath,
    const char* intfName) :
    sdbusplus::server::object::object<
    sdbusplus::xyz::openbmc_project::Led::server::Group>(
            cv_bus, objPath),
    iv_path(objPath)
{
    // Nothing to do here
}

/** @brief Wait for client requests */
void Group::run()
{
    /** @brief Claim the bus */
    cv_bus.request_name(BUSNAME);

    while(true)
    {
        try
        {
            cv_bus.process_discard();
            cv_bus.wait();
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}

} // namespace led
} // namespace phosphor
