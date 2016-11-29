#include <iostream>
#include <memory>
#include "argument.hpp"
#include "physical.hpp"
#include "config.h"

static void ExitWithError(const char* err, char** argv)
{
    ArgumentParser::usage(argv);
    std::cerr << std::endl;
    std::cerr << "ERROR: " << err << std::endl;
    exit(-1);
}

int main(int argc, char** argv)
{
    // Read arguments.
    auto options = std::make_unique<ArgumentParser>(argc, argv);

    // Parse out Name argument.
    auto name = (*options)["name"];
    if (name == ArgumentParser::empty_string)
    {
        ExitWithError("Name not specified.", argv);
    }

    // Parse out Name argument.
    auto path = (*options)["path"];
    if (path == ArgumentParser::empty_string)
    {
        ExitWithError("Path not specified.", argv);
    }

    // Finished getting options out, so release the parser.
    options.release();

    auto busName = BUSNAME + std::string(".") + name;
    auto led = phosphor::led::Physical(
                            sdbusplus::bus::new_system(),
                            busName.c_str(), OBJPATH,
                            name, path);
    return 0;
}
