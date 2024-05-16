#include "numbers_converter.hpp"

#include <bitset>
#include <iostream>
#include <sstream>

namespace {

void convert_to_binary(const std::vector<std::size_t>& numbers) {
    constexpr std::size_t nbits = sizeof(std::size_t) * 8;
    for (const auto n : numbers)
        std::cout << n << " = (" << std::bitset<nbits>(n) << ")_2" << std::endl;
}

void convert_to_decimal(const std::vector<std::size_t>& numbers) {
    for (const auto n : numbers)
        std::cout << n << " = (" << n << ")_10" << std::endl;
}

void convert_to_hex(const std::vector<std::size_t>& numbers) {
    std::stringstream ss;
    ss << std::hex;
    for (const auto n : numbers) {
        ss << n;
        std::cout << n << " = (" << ss.str() << ")_16" << std::endl;
        ss.str(std::string());
    }
}

} // namespace

void convert_numbers(const std::vector<std::size_t>& numbers, std::string_view base) {
    if (base == "bin")
        convert_to_binary(numbers);
    else if (base == "hex")
        convert_to_hex(numbers);
    else
        convert_to_decimal(numbers);
}
