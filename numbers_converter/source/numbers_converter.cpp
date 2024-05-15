#include "numbers_converter.hpp"

#include <bitset>
#include <iostream>
#include <sstream>

namespace {

void convert_to_binary(const std::vector<std::size_t>& numbers) {
    constexpr std::size_t nbits = sizeof(std::size_t) * 8;
    for (const auto n : numbers)
        std::cout << std::bitset<nbits>(n) << std::endl;
}

void convert_to_decimal(const std::vector<std::size_t>& numbers) {
    for (const auto n : numbers)
        std::cout << n << std::endl;
}

void convert_to_hex(const std::vector<std::size_t>& numbers) {
    std::stringstream ss;
    ss << std::hex;
    for (const auto n : numbers)
        ss << n << std::endl;
    std::cout << ss.str();
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
