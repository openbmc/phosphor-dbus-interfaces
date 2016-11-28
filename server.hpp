#pragma once
#include <tuple>
#include <systemd/sd-bus.h>
#include <sdbusplus/server.hpp>

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

class Group
{
    public:
        /* Define all of the basic class operations:
         *     Not allowed:
         *         - Default constructor to avoid nullptrs.
         *         - Copy operations due to internal unique_ptr.
         *     Allowed:
         *         - Move operations.
         *         - Destructor.
         */
        Group() = delete;
        Group(const Group&) = delete;
        Group& operator=(const Group&) = delete;
        Group(Group&&) = default;
        Group& operator=(Group&&) = default;
        virtual ~Group() = default;

        /** @brief Constructor to put object onto bus at a dbus path.
         *  @param[in] bus - Bus to attach to.
         *  @param[in] path - Path to attach at.
         */
        Group(bus::bus& bus, const char* path);




        /** Get value of Asserted */
        virtual bool asserted() const;
        /** Set value of Asserted */
        virtual bool asserted(bool value);


    private:

        /** @brief sd-bus callback for get-property 'Asserted' */
        static int _callback_get_Asserted(
            sd_bus*, const char*, const char*, const char*,
            sd_bus_message*, void*, sd_bus_error*);
        /** @brief sd-bus callback for set-property 'Asserted' */
        static int _callback_set_Asserted(
            sd_bus*, const char*, const char*, const char*,
            sd_bus_message*, void*, sd_bus_error*);


        static constexpr auto _interface = "xyz.openbmc_project.Led.Group";
        static const vtable::vtable_t _vtable[];
        sdbusplus::server::interface::interface
                _xyz_openbmc_project_Led_Group_interface;

        bool _asserted{};

};


} // namespace server
} // namespace Led
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

