#ifndef __ARGUMENT_H
#define __ARGUMENT_H
#include <getopt.h>
#include <map>
#include <string>

class ArgumentParser
{
    public:
        ArgumentParser(int argc, char** argv);
        const std::string& operator[](const std::string& opt);

        static void usage(char** argv);

        static const std::string true_string;
        static const std::string empty_string;

    private:
        std::map<const std::string, std::string> arguments;

        static const option options[];
        static const char* optionstr;

    private:
        ArgumentParser() {};
};

#endif
