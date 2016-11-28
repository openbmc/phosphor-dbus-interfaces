#include "led-manager.hpp"
#include "config.h"
#include <iostream>
#include <thread>

int main(void)
{
    std::vector<std::unique_ptr<phosphor::led::Group>> g_IntfContainer;
    auto root = std::string(OBJPATH) + "/";

    /** Now create so many dbus objects as there are groups */
    for (auto &grp: phosphor::led::Group::cv_LedMap)
    {
        auto grpPath = root + grp.first;
        g_IntfContainer.emplace_back(std::make_unique<phosphor::led::Group>(
                BUSNAME, grpPath.c_str(), INTERFACE));
    }
    phosphor::led::Group::run();
    return 0;
}
