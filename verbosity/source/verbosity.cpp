#include "verbosity.hpp"

std::istream& operator>>(std::istream& input, verbosity_level& verbosity) {
    uint16_t value;
    input >> value;

    if (value > static_cast<uint16_t>(max_verbosity_level)) {
        std::cerr << "[ERROR] : Invalid verbosity_level value - " << value << std::endl;
        std::exit(EXIT_FAILURE);
    }

    verbosity = static_cast<verbosity_level>(value);

    return input;
}
