#pragma once

#include <map>
#include <set>
#include <sdbusplus/bus.hpp>
#include <sdbusplus/server.hpp>
#include <sdbusplus/server/object.hpp>
#include "xyz/openbmc_project/Led/Group/server.hpp"

namespace phosphor
{
namespace led
{

/** @class Group
 *  @brief Manages group of LEDs and applies action on the elements of group
 */
class Group : public sdbusplus::server::object::object<
    sdbusplus::xyz::openbmc_project::Led::server::Group>
{
private:
    /** @brief Finds the set of LEDs to operate on and executes action
     *
     *  @return Status or exception thrown
     */
    bool driveLEDs();

public:
    /** @brief Define possible actions on a given LED.
     *  For the BLINK operation, follow 50-50 duty cycle
     */
    enum Action
    {
        Off,
        On,
        Blink,
    };

    Group() = delete;
    ~Group() = default;
    Group(const Group&) = default;
    Group& operator=(const Group&) = default;
    Group(Group&&) = default;
    Group& operator=(Group&&) = default;

    /** @brief Constructs LED Group
     *
     * @param[in] busName   - The Dbus name to own
     * @param[in] objPath   - The Dbus path that hosts LED group
     * @param[in] intfName  - The Dbus interface
     */
    Group(const char* busName, const char* objPath, const char* intfName);

    /** @brief Name of the LED and it's proposed action.
     *  This structure is supplied as configuration at build time
     */
    struct LedAction
    {
        std::string name;
        Action action;

        // Needed for inserting elements into sets
        bool operator<(const LedAction& right) const
        {
            if (name == right.name)
            {
                return action < right.action;
            }
            return name < right.name;
        }
    };

    /** @brief For finding intersection */
    static bool ledComp(const LedAction& left, const LedAction& right)
    {
        return left.name < right.name;
    }

    /** @brief Dbus constructs used by LED Group manager */
    static sdbusplus::bus::bus cv_bus;

    /** @brief Path of the group instance */
    std::string iv_path;

    /** @brief static global map constructed at compile time */
    static std::map<std::string,
           std::set<LedAction>> cv_LedMap;

    /** @brief sd_bus object manager */
    static sdbusplus::server::manager::manager cv_ObjManager;

    using group = std::set<LedAction>;

    /** @brief Pointers to groups that are in asserted state */
    static std::set<group*> cv_AssertedGroups;

    /** @brief Contains the LEDs that are in asserted state */
    static group cv_CurrentState;

    /** @brief Waits on the client request and processes them */
    static void run();

    /** @brief Given a group name, tells if its in asserted state or not.
     *
     *  @param[in]  name    -  Group name
     *  @return             -  Whether in asserted state or not
     */
    bool getGroupState(const std::string& name) const;

    /** @brief Given a group name, applies the action on the group
     *
     *  @param[in]  name    -  Group name
     *  @param[in]  assert  -  Could be 0 or 1
     *  @return             -  Success or exception thrown
     */
    bool setGroupState(const std::string& name, const bool& assert);

    /** @brief Property SET Override function
     *
     *  @param[in]  value   -  True or False
     *  @return             -  Success or exception thrown
     */
    virtual auto asserted(bool value) -> bool override;
};

} // namespace led
} // namespace phosphor
