#if !defined(HOFNAS_COMMON_CONSOLE_HPP)
#define HOFNAS_COMMON_CONSOLE_HPP

#include <iostream>
#include <string>

namespace hofnas::common {
    class Console {
    public:
        void debug(std::string message);
        void error(std::string message);
        void info(std::string message);
        void warn(std::string message);
    private:
        bool _is_debug_mode_enabled;
    };
}

#endif // HOFNAS_COMMON_CONSOLE_HPP
