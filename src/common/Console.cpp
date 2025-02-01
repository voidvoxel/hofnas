#include <iostream>

#include "Console.hpp"

void hofnas::common::Console::debug(std::string message)
{
#if defined(DEBUG)
    std::cout << "[Debug] " << message << std::endl;
#endif
}

void hofnas::common::Console::error(std::string message)
{
    std::cout << "[Error] " << message << std::endl;
}

void hofnas::common::Console::info(std::string message)
{
    std::cout << "[Info] " << message << std::endl;
}

void hofnas::common::Console::warn(std::string message)
{
    std::cout << "[Warning] " << message << std::endl;
}
